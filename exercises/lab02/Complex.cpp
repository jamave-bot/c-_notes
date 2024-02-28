#include <iostream>
#include "Complex.h"

using namespace std;

/*
 +
 if you have two complex numbers of the forms (a, b) and (c, d) 
 where a and c are the real parts and b and d are the imaginary parts, 
 the result of the addition operation is (a+c, b+d)
*/
Complex& operator+(Complex&, Complex&); 


/*
 - 
 if you have two complex numbers of the forms (a, b) and (c, d) 
 where a and c are the real parts and b and d are imaginary parts, 
 the result of the subtraction operation is (a-c, b-d)
*/
Complex& operator-(Complex&, Complex&);

/*
 *
 if you have two complex numbers of the forms (a, b) and (c, d) 
 where a and c are the real parts and b and d are imaginary parts, 
 the result of the multiplication operation is (ac-bd, ad+bc)
*/
Complex& operator*(Complex&, Complex&);

/*
 /
 if you have two complex numbers of the forms (a, b) and (c, d) 
 where a and c are the real parts and b and d are imaginary parts, 
 the result of the addition operation is ((ac+bd)/(c^2+d^2), (bc-ad)/(c^2+d^2))
*/
Complex& operator/(Complex&, Complex&);

/*
 <<
 prints the number using the following format: (real, imaginary)
*/
std::ostream operator<<(std::ostream&, Complex&);

/*
 >>
 inputs the number using the following format: (real, imaginary)
*/
std::istream operator>>(std::istream&, Complex&);

/*
 == 
 returns true if the real parts are equal and the imaginary parts 
 are equal
*/
bool operator==(Complex&, Complex&);

/*
 !=
 returns true if the real parts are not equal or the imaginary parts 
 are not equal. 
*/
bool operator!=(Complex&, Complex&);