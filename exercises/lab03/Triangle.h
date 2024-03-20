#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Shape.h"

class Triangle : public Shape{
public: 
    Triangle(Point&, Point&, Point&);
    virtual ~Triangle() = default;
    virtual void addPoint(Point&) override;
    virtual double calculateArea() override;
};

#endif