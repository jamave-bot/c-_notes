//
//  Point.cpp
//  Shape
//
//  Created by esma yildirim on 4/7/22.
//

#include "Point.h"
#include <sstream>
using namespace std;
Point::Point(double xx, double yy):x{xx},y{yy}{
    
}

void Point::setX(double xx){ x = xx;}
void Point::setY(double yy){ y = yy;}
double Point::getX()const { return x;}
double Point::getY()const { return y;}

ostream& operator<<(ostream & output, const Point &p)
{
    output << "P(" << p.getX()<< ", " << p.getY() << ")";
    return output;
}
