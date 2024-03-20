#include "Circle.h"
#include <iostream>
#include <cmath>

Circle::Circle(Point& p1, Point& p2){
    Shape::addPoint(p1);
    Shape::addPoint(p2);
}
void Circle::addPoint(Point& p){
    if (getPointList().size() == 2){
        std::cout << "You cannot add more points\n";
    }
    Shape::addPoint(p);
}

double Circle::calculateArea(){
    Point& p1 = getPointList()[0];
    Point& p2 = getPointList()[1];
    double radius = sqrt( pow(p2.getX() - p1.getX(), 2) + pow(p2.getY() - p1.getY(), 2) );
    return 3.14 * radius * radius;
}