// $Id: Hyperbolic.h,v 1.1.1.1 1999/12/20 22:28:05 burnett Exp $
//

#ifndef HYPERBOLIC_H
#define HYPERBOLIC_H

#include "geometry/Surface.h"

/// Hyperbolic surface
class Hyperbolic : public Surface
{
  public:

    Hyperbolic(const Point& origin, const Vector& axis, double ri, double ro, double h_z);

    virtual double how_near( const Point& x ) const;
    virtual double distance( const Point& x ,const Vector& v,int) const;
    /// returns normal-vector at Point x, assuming x to be "on" the surface
    virtual Vector normal( const Point& x )const;

    // specify geometry

    const Vector& axis()const{return Surface::direction();}

    double radius(double z=0)const;
    // radius at position z from origin

    virtual const char *nameOf() const { return "Hyperbolic"; }
    virtual void printOn( std::ostream& os = std::cout ) const;


};
#endif

