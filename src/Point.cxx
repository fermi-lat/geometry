// $Header: /cvs/cmt/geometry/src/Point.cxx,v 1.1.1.1 1999/12/18 22:50:55 burnett Exp $
//

#include "geometry/Point.h"
#include "geometry/CoordTransform.h"



GeomObject&
Point::transform(const CoordTransform& T)
{
	T.transformCoord(*this);
    return *this;
}




void
Point::printOn(std::ostream& cout)const
{
	cout << "Point";
	cout << '(' << x() << ',' << y() << ',' << z() << ')';
}


