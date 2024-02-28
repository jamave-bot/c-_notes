#include <iomanip>
#include "PhoneNumber.h"
using namespace std;

ostream& operator<<(ostream& output, const PhoneNumber& number){
    output << "(" << number.areaCode << ") " << number.exchange << "-" << number.line;
    return output; // enables cout << a << b << c (similar to cascading functions)
}

istream& operator>>(istream& input, PhoneNumber& number){
    input.ignore(); //skips the (
    input >> setw(3) >> number.areaCode; // input area code
    input.ignore(2); // skips the ) and space
    input >> setw(3) >> number.exchange; // input exchange
    input.ignore(); //skips the dash (-)
    input >> setw(4) >> number.line; // inputs line
    return input; // enables cin >> a >> b >> c;
}