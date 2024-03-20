#include "Shape.h"
#include <string>
#include <sstream>

void Shape::setPointList(std::vector<Point>& pList){
    pointList = pList;
}

std::vector<Point>& Shape::getPointList(){
    return pointList;
}

void Shape::addPoint(Point& p){
    getPointList().push_back(p);
}

std::string Shape::toString(){
    std::ostringstream output;

    if (getPointList().size() == 2){
        output << "Circle:\n";
    } else if (getPointList().size() == 3){
        output << "Triangle:\n";
    } else if (getPointList().size() == 4){
        output << "Rectangle:\n";
    }

    for (Point p : pointList){
        output << p << " ";
    }
    return output.str();
}