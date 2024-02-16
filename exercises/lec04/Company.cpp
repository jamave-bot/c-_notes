#include <iostream>
#include <sstream>
#include "Company.h"
#include "Employee.h"

using namespace std;

// Constructor 
Company::Company(string name):compName{name}{
    
}

// Destructor
Company::~Company(){
    if (employeeList != nullptr){
        delete [] employeeList;
        employeeList = nullptr;
    }
}

// setter
void Company::setEmployeeList(Employee *employeePtr, int employeeNum){
    if ((employeePtr != nullptr) && (employeeNum > 0)){
        employeeCount = employeeNum;
        employeeList = employeePtr;
    }
}


// toString
string Company::toString() const{
    ostringstream output;
    output << "Company name: " << compName << endl;
    output << "Employees:" << endl;

    // loop through employee  array

    for (int i = 0; i < employeeCount; i++){
        output << employeeList[i].toString() << endl;
    }

    return output.str();

}