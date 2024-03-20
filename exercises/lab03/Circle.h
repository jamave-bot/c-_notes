#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

class Circle : public Shape{
public: 
    Circle(Point&, Point&);
    virtual ~Circle() = default;
    virtual void addPoint(Point&) override;
    virtual double calculateArea() override;
};

#endif