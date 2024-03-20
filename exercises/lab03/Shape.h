#ifndef SHAPE_H
#define SHAPE_H

#include "Point.h"
#include <vector> // part of the std namespace
#include <string>

class Shape{
public:
    virtual ~Shape() = default;
    void setPointList(std::vector<Point>& );
    std::vector<Point>& getPointList();
    virtual void addPoint(Point&);
    virtual double calculateArea() = 0;
    std::string toString();

private:
    std::vector<Point> pointList;
};


#endif