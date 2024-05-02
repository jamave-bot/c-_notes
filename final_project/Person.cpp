#include "Person.h"
#include <string>
#include <sstream>

using namespace std;

Person::Person(string fName, string lName, string years, string sp): firstName{fName},
                lastName{lName}, yearsAlive{years}, spouse{sp} {}

string Person::getFirstName(){
    return firstName;
}

void Person::setFirstName(string fName){
    firstName = fName;
}

string Person::getLastName(){
    return lastName;
}

void Person::setLastName(string lName){
    lastName = lName;
}

string Person::getYearsAlive(){
    return yearsAlive;
}

void Person::setYearsAlive(string years){
    yearsAlive = years;
}

string Person::getSpouse(){
    return spouse;
}

void Person::setSpouse(string sp){
    spouse = sp;
}

string Person::toString(){
    ostringstream output; 
    output << this->getFirstName() << " " << this->getLastName() << endl
        << this->getYearsAlive() << endl
        << "Married to:\n" << this->getSpouse() << endl;
    return output.str();
}