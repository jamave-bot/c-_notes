#include "Shape.h"
#include "Point.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Circle.h"
#include <iostream>
#include <vector> // part of the std namespace

using namespace std;

int main(){

    Point recP1{2,4};
    Point recP2{6,4};
    Point recP3{6,1};
    Point recP4{2,1};

    Point extraP{2.5, 6};

    Rectangle rec{recP1, recP2, recP3, recP4};

    // cout << "Rectangle:\n" << rec.toString() << endl;
    // cout << "Area: " << rec.calculateArea() << endl;
    // rec.addPoint(extraP);

    Point triP1{9, 2};
    Point triP2{11, -2};
    Point triP3{7, -1};


    Triangle tri{triP1, triP2, triP3};
    // cout << "Triangle:\n" << tri.toString() << endl;
    // cout << "Area: " << tri.calculateArea() << endl;
    // tri.addPoint(extraP);


    Point circP1{3,-3};
    Point circP2{1,-3};

    Circle circ{circP1, circP2};
    // cout << "Circle:\n" << circ.toString() << endl;
    // cout << "Area: " << circ.calculateArea() << endl;
    // circ.addPoint(extraP);

    vector<Shape* > shapes{&rec, &tri, &circ};

    for (Shape* shape: shapes){
        cout << shape->toString() << endl; 
        cout << "Area= " <<  shape->calculateArea() << endl;
    }


    return 0;
}