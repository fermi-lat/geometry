// $Id: GeomObject.cxx,v 1.1.1.1 1999/12/18 22:50:55 burnett Exp $
//
//

#include "geometry/GeomObject.h"
#include "geometry/CoordTransform.h"

#include <typeinfo>

const char* GeomObject::nameOf()const
{
	const type_info& t1 = typeid(*this);
	return t1.name();
}

GeomObject&
GeomObject::move(const Vector& v)
{
  return transform(CoordTransform(v));
}
GeomObject& GeomObject::moveX(double s){ return move(Vector(s,0,0));}
GeomObject& GeomObject::moveY(double s){ return move(Vector(0,s,0));}
GeomObject& GeomObject::moveZ(double s){ return move(Vector(0,0,s));}

GeomObject&
GeomObject::rotateX(double theta)
{
    HepRotation R;
    return transform(R.rotateX(theta));
}


GeomObject &
GeomObject::rotateY(double theta)
{
    HepRotation R;
    return transform(R.rotateY(theta));
}

GeomObject &
GeomObject::rotateZ(double theta)
{
    HepRotation R;
    return transform(R.rotateZ(theta));
}

GeomObject &
GeomObject::rotate(double angle, const Vector & axis)
{
    HepRotation R;
    return transform(R.rotate(angle, axis));
}
void GeomObject::printOn(std::ostream& )const{};

#if 0
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//	    Printing facility for any subclass
class GeomObject::Print : public Command {
    friend class GeomObject;
    Print(GeomObject* me, std::ostream* out):m_self(me), m_out(out){}
    void execute(){m_self->printOn(*m_out);}
    GeomObject* m_self;
    std::ostream* m_out;
};

Command * GeomObject::printCommand(std::ostream* out)
{
    return new Print(this,out);
}

#endif




