#include "Point.h"
#include <iostream>
#include <cmath>


// static data member intialization
unsigned int Point::count{0}

unsigned int Point::getCount(){return count;}

// constructor definition
// using the this keyword to point to the initalized data member
Point::Point(int x, int y)
{
    this->x = x;
    this->y = y;
    std::cout << "Count: " << count << std::endl;
}

Point::~Point(){
    count--;
    std::cout << "Count: " << count << std::endl;
}

// setter for x
// returns a dereferenced pointer of the current object
Point& Point::setX(int x){
    this->x = x;
    return *this;
}

// setter for y
// returns a dereferenced pointer of the current object
Point& Point::setY(int y){
    this->y = y;
    return *this;
}

int Point::getX(){return x;}
int Point::getY(){return y;}


// friend function, we can access
// we don't need to add the Point:: since it's just a friend function
double distance(Point& a, Point& b){
    return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}

