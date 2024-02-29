#include <iostream>
#include <string>

#ifndef COMPLEX_H
#define COMPLEX_H


class Complex{
    friend Complex operator+(const Complex&, const Complex&); // we cannot return a reference since after the call is made, the object declared inside would be destroyed
    friend Complex operator-(const Complex&, const Complex&);
    friend Complex operator*(const Complex&, const Complex&);
    friend Complex operator/(const Complex&, const Complex&);
    friend std::ostream& operator<<(std::ostream&, const Complex&);
    friend std::istream& operator>>(std::istream&, Complex&);
    friend bool operator==(const Complex&, const Complex&);
    friend bool operator!=(const Complex&, const Complex&);
public: 
    Complex(double = 0.0, double = 0.0);
private:
    double real{0.0}; // primitive value we can intialize here
    double imaginary{0.0};
};


#endif