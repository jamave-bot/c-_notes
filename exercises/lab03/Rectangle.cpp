#include "Rectangle.h"
#include <iostream>
#include <cmath>

Rectangle::Rectangle(Point& p1, Point& p2, Point& p3, Point& p4){
    Shape::addPoint(p1);
    Shape::addPoint(p2);
    Shape::addPoint(p3);
    Shape::addPoint(p4);
}

void Rectangle::addPoint(Point& p){
    if (getPointList().size() == 4){
        std::cout << "You cannot add more points\n";
    }
    Shape::addPoint(p);
}  

double Rectangle::calculateArea(){
    double side1 = sqrt(pow(getPointList()[1].getX() - getPointList()[0].getX(), 2 ) + pow(getPointList()[1].getY() - getPointList()[0].getY(), 2 ));
    double side2 = sqrt(pow(getPointList()[2].getX() - getPointList()[1].getX(), 2 ) + pow(getPointList()[2].getY() - getPointList()[1].getY(), 2 ));

    return side1 * side2;
}

