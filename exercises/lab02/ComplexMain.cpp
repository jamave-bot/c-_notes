#include "Complex.h"
#include <iostream>

using namespace std;

int main(){

    Complex c1{3,5};
    Complex c2{-4,7};

    cout << "c1: " << c1 << endl;
    cout << "c2: " << c2 << endl;

    cout << "Addition: " << (c1+c2) << endl;
    cout << "Subtraction: " << (c1-c2) << endl;
    cout << "Multiplication: " << (c1*c2) << endl;
    cout << "Division: " << (c1/c2) << endl;

    Complex c3;

    cout << "Enter new complex object in (real, imaginary) format: ";
    cin >> c3;

    cout << "c3: " << c3 << endl;

    cout << "c1 == c2 : " << (c1 == c2) << endl;
    cout << "c1 != c2 : " << (c1 != c2) << endl; 


    return 0;
};