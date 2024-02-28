#include <iostream>
#include <string>

#ifndef COMPLEX_H
#define COMPLEX_H


class Complex{
    friend Complex& operator+(Complex&, Complex&);
    friend Complex& operator-(Complex&, Complex&);
    friend Complex& operator*(Complex&, Complex&);
    friend Complex& operator/(Complex&, Complex&);
    friend std::ostream operator<<(std::ostream&, Complex&);
    friend std::istream operator>>(std::istream&, Complex&);
    friend bool operator==(Complex&, Complex&);
    friend bool operator!=(Complex&, Complex&);
public: 
    Complex(double  = 0, double = 0);
private:
    double real;
    double imaginary;
};


#endif