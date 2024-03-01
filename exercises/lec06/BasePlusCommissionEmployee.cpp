#include <iomanip>
#include <sstream>
#include <stdexcept> 
#include "BasePlusCommissionEmployee.h"
#include <string>

using namespace std;

BasePlusCommissionEmployee::BasePlusCommissionEmployee(string& fName, string& lName, string& sn, 
                            double sales, double rate, double salary)
                            : CommissionEmployee(fName, lName, sn, sales, rate)
{
    setBaseSalary(salary);
}


void BasePlusCommissionEmployee::setBaseSalary(double salary) {
    if (salary < 0.0){
        throw invalid_argument("Salary must be > 0.0");
    }
    baseSalary = salary;
}    

double BasePlusCommissionEmployee::getBaseSalary() const {
    return baseSalary;
}

double BasePlusCommissionEmployee::earnings() const{ 
    // call the earnings function from the base class
    return getBaseSalary() + CommissionEmployee::earnings();
}

string BasePlusCommissionEmployee::toString() const{
    // we must use getter functions here if we plan on having this class be inherited
    // DO NOT DIRECTLY ACCESS DATA MEMBERS

    ostringstream output;
    // we use the base class
    output << CommissionEmployee::toString()
    << "\nBase salary: " << getBaseSalary();  
    return output.str(); 
}