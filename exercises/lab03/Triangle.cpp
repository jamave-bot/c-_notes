#include "Triangle.h"
#include <iostream>
#include <cmath>

Triangle::Triangle(Point& p1, Point& p2, Point& p3){
    Shape::addPoint(p1);
    Shape::addPoint(p2);
    Shape::addPoint(p3);
}
void Triangle::addPoint(Point& p){
    if (getPointList().size() == 3){
        std::cout << "You cannot add more points\n";
    }
    Shape::addPoint(p);
}

double Triangle::calculateArea(){
    Point& p1 = getPointList()[0];
    Point& p2 = getPointList()[1];
    Point& p3 = getPointList()[2];

    return 0.5 * ( (p1.getX() * (p2.getY()- p3.getY())) + (p2.getX() * (p3.getY()- p1.getY()))  + (p3.getX() * (p1.getY()- p2.getY())));
}