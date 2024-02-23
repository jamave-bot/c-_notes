#include <iostream>
#include "Point.h"

using namespace std;
int main(){

    Point p1{4,5};
    Point p2{2,3};
    Point p3;
    
    p3.setX(6).setY(2);

    cout << "Distance: " << distance(p1, p2) << endl;

    return 0;

}