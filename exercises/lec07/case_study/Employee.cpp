#include "Employee.h"
#include <sstream>
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

Employee::Employee(const string& fname, const string& lname, const string& ssn):firstName{fname}, 
                    lastName{lname}, socialSecurityNumber{ssn} {}

// no destructor definition needed since we used the keyword default in the header file

// set first name
void Employee::setFirstName(const string& first) {
   firstName = first; // should validate
}

// return first name
string Employee::getFirstName() const { return firstName; }

// set last name
void Employee::setLastName(const string& last) {
   lastName = last; // should validate
}

// return last name
string Employee::getLastName() const { return lastName; }

// set social security number
void Employee::setSocialSecurityNumber(const string& ssn) {
   socialSecurityNumber = ssn; // should validate
}

// return social security number
string Employee::getSocialSecurityNumber() const {
   return socialSecurityNumber;
}


// no implementation for earnings since it's a pure virtual function

string Employee::toString() const {
   ostringstream output;
   output << fixed << setprecision(2); // two digits of precision   
   output << getFirstName() << ' ' << getLastName()
      << "\nsocial security number: " << getSocialSecurityNumber();
   return output.str();
}