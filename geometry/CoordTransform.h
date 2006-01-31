// $Id: CoordTransform.h,v 1.3 2002/01/02 02:56:45 burnett Exp $
//

#ifndef __COORDTRANSFORM_H
#define __COORDTRANSFORM_H

#include "CLHEP/Vector/Rotation.h"
#include "CLHEP/Geometry/Transform3D.h"
#include "geometry/Vector.h"
class Point;

typedef CLHEP::HepRotation Rotation;

/**
  Define basic coordinate transformations 
<PRE>
   Vector: v' = R * v
   Point:  p' = R * p + X
</PRE>
 where R is a 3x3 rotation matrix and X a Vector.
 */
class CoordTransform
{
  public:
   CoordTransform(){};
   CoordTransform(const Vector& t):X(t){};
   CoordTransform(const Rotation& _R):R(_R){};
   CoordTransform(const Rotation& _R, const Vector& t):X(t),R(_R){}

   //! initialize from newer HepTransform3D (allows auto conversion)
   CoordTransform(const HepGeom::Transform3D& T):X(T.getTranslation()),R(T.getRotation()){};
   // constructors: specify either or both rotation matrix, translation

   /// return inverse transformation
   CoordTransform inverse()const;

   /// product of two transformations
   CoordTransform operator*(const CoordTransform& T) const;

   void transformVector(Vector& v)const{ v*=R;}
   void transformCoord(Point& p)const;

   /// special default transform 
   static const CoordTransform identity;
  private:

   Vector X;   // translation  vector
   Rotation R; // rotation  matrix
};

// simple little inline to get around conversion problems with some compilers
inline Vector operator*(const Rotation& R, const Vector& p)
{
  CLHEP::Hep3Vector q(p);
  return Vector(R*q);
}
#endif

