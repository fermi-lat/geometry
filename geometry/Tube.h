//  $Id: Tube.h,v 1.1.1.1 1999/12/18 22:50:54 burnett Exp $
//
//
// define a Tubular solid

#ifndef TUBE_H
#define TUBE_H

#include "geometry/Volume.h"

class Tube: public Volume
{

public:
    Tube( double z, double ri, double ro );
    // constructor: length, inner, outer radii 

    void resize( double z, double ri, double ro );
    // resize the Tube with length, inner, outer radii 

    const char *nameOf() const { return "Tube"; }
    void printOn( std::ostream& os = std::cout ) const;


    double innerRadius()const;
    double outerRadius()const;
    double length()const;
    // access to dimensions
   
    const Vector& axis()const;	

	
private: 
 
   void calculateSurfaces( double z, double ri, double ro );
};

#endif // TUBE_H

