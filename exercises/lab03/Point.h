//
//  Point.h
//  Shape
//
//  Created by esma yildirim on 4/7/22.
//
#include <iostream>
#ifndef Point_h
#define Point_h

class Point{
    friend std::ostream& operator<<(std::ostream&, const Point &);
public:
    
    explicit Point(double xx = 0.0, double yy = 0.0);
    void setX(double xx);
    void setY(double yy);
    double getX()const;
    double getY()const;
private:
    double x;
    double y;
};

#endif /* Point_h */
