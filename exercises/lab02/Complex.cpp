#include <iostream>
#include <cmath>
#include "Complex.h"

using namespace std;

// Constructor 

Complex::Complex(double rNum, double iNum):real{rNum}, imaginary{iNum}{}

/*
 +
 if you have two complex numbers of the forms (a, b) and (c, d) 
 where a and c are the real parts and b and d are the imaginary parts, 
 the result of the addition operation is (a+c, b+d)
*/
Complex operator+(const Complex& c1, const Complex& c2){
    return Complex(c1.real + c2.real, c1.imaginary + c2.imaginary);
}; 


/*
 - 
 if you have two complex numbers of the forms (a, b) and (c, d) 
 where a and c are the real parts and b and d are imaginary parts, 
 the result of the subtraction operation is (a-c, b-d)
*/
Complex operator-(const Complex& c1, const  Complex& c2){
    return Complex(c1.real - c2.real, c1.imaginary - c2.imaginary);
};

/*
 *
 if you have two complex numbers of the forms (a, b) and (c, d) 
 where a and c are the real parts and b and d are imaginary parts, 
 the result of the multiplication operation is (ac-bd, ad+bc)
*/
Complex operator*(const Complex& c1, const Complex& c2){
    return Complex( c1.real*c2.real - c1.imaginary*c2.imaginary, c1.real*c2.imaginary + c1.imaginary*c2.real);
};

/*
 /
 if you have two complex numbers of the forms (a, b) and (c, d) 
 where a and c are the real parts and b and d are imaginary parts, 
 the result of the addition operation is ((ac+bd)/(c^2+d^2), (bc-ad)/(c^2+d^2))
*/
Complex operator/(const Complex& c1, const Complex& c2){
    double a = c1.real;
    double b = c1.imaginary;
    double c = c2.real;
    double d = c2.imaginary;

    return Complex((a*c+ b*d )/ (pow(c,2)+pow(d,2)), ( b*c - a*d )/(pow(c,2)+pow(d,2)));
};

/*
 <<
 prints the number using the following format: (real, imaginary)
*/
ostream& operator<<(ostream& output, const Complex& obj){
    output << "(" << obj.real << ", " << obj.imaginary << ")";
    return output;
};

/*
 >>
 inputs the number using the following format: (real, imaginary)
*/
istream& operator>>(istream& input, Complex& obj){
    input.ignore(); // skips the ()
    input >> obj.real; // input day
    input.ignore(2); //skips the ", "
    input >> obj.imaginary; // inputs line
    input.ignore();
    return input; // enables cin >> a >> b >> c;
};

/*
 == 
 returns true if the real parts are equal and the imaginary parts 
 are equal
*/
bool operator==(const Complex& c1, const Complex& c2){
    if (c1.real == c2.real && c1.imaginary == c2.imaginary){
        return true;
    } else{
        return false;
    }

};

/*
 !=
 returns true if the real parts are not equal or the imaginary parts 
 are not equal. 
*/
bool operator!=(const Complex& c1, const Complex& c2){
    if (c1.real != c2.real || c1.imaginary != c2.imaginary){
        return true;
    } else{
        return false;
    }  
};