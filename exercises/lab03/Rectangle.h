#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

class Rectangle : public Shape{
public:
    Rectangle(Point&, Point&, Point&, Point&);
    virtual ~Rectangle()= default;
    virtual void addPoint(Point&) override; 
    virtual double calculateArea() override;
// no private block since it has no additional data members

};


#endif