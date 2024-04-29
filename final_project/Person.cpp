#include "Person.h"
#include <string>

using namespace std;

Person::Person(string fName): firstName{fName}{}

string Person::getFirstName(){
    return firstName;
}

void Person::setFirstName(string fName){
    firstName = fName;
}