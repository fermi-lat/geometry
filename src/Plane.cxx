// $Header: Plane.cxx,v 1.1.1.1 1999/12/18 22:50:55 burnett Exp $
//


#include "geometry/Plane.h"
#include <cfloat>

static Plane dummy(Point(), Vector()); // force something?

Plane::~Plane() {} // dummy

Plane::Plane(const Point& o, const Vector& n)
: Surface(o, n.unit())	 // save unit vector in Surface
, m_d(n.magnitude())		 // magnitude here
{
   if(m_d==0)
   FATAL("Plane constructor called with null unit vector");

}
Plane::Plane(const Point& o, const Vector& n, double dist)
: Surface(o, n.unit())	 // save unit vector in Surface
, m_d(dist)
{}


double
Plane::distance( const Point& x, const Vector& vhat, int inout)const
{
  // distance along direction v from point x to enter or leave the surface.
   double denom = vhat*direction();
   return ( denom*inout<=0 )? FLT_MAX : how_near(x)/denom;
}

void
Plane::reverse()
{
    Surface::reverse();
    m_d *=-1.;
}

Vector Plane::normal(const Point& ) const
{
    return Surface::direction();
}

Surface&
Plane::copy()const
{
    return *new Plane(origin(), direction(), m_d);
}
void
Plane::printOn( std::ostream& os ) const
{ 	os << "Plane: origin= "	<< origin()
       << ",\t normal= " << direction()
	   << ",\t distance= " << m_d
       << "\n";
}





