// $Header: /cvs/cmt/geometry/geometry/Plane.h,v 1.2 1999/12/21 04:37:19 burnett Exp $
//
//
//

#ifndef __PLANE_H
#define __PLANE_H
#include "geometry/Surface.h"
/**
 Define an infinite plane surface. Inherits origin and constant
 normal from Surface.
 Interpret direction data member of Surface as a unit normal vector from the origin to the
 surface, has data member for magnitude, for efficiency
*/
class Plane: public Surface
{
 public:
   /** constructor: origin is saved as a reference, n is the vector from the
     *  origin to the plane. Note that inside is defined as the side with the  origin.
     * second form is equivalent, but allows plane to pass through origin
     */
   Plane( const Point& origin, const Vector& n );
   Plane( const Point& origin, const Vector& nhat, double dist );


   /// define the geometry
   virtual double how_near( const Point& x ) const;
   virtual double distance( const Point& x, const Vector& v, int inout)const;

   /// returns normal-vector at Point x, assuming x to be on the plane
   virtual Vector normal( const Point& x )const;

   /// reverses sense of surface
   virtual void reverse();

   /// make a copy, but using same origin
   virtual Surface& copy()const;

    virtual void setOffset(double offset){ m_d=offset;  };
    virtual double offset()const{return m_d;};
    // distance from origin to the plane


    const char *nameOf() const { return "Plane"; }
    void printOn( std::ostream& os = std::cout ) const;


 private:
    double m_d;    // offset from origin to surface

};


inline double Plane::how_near( const Point& x ) const
{  //  Distance from the point x to the infinite Plane.
   //  The distance will be positive if the point is inside the Plane,
   //  negative if the point is outside.
    return ( m_d + origin()*direction() - x*direction()  );

}

#endif

