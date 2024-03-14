#include "SalariedEmployee.h"
#include <iomanip>
#include <sstream>
#include <string>
#include <stdexcept>

using namespace std;

SalariedEmployee::SalariedEmployee(const string& fname, const string& lname,
    const string& ssn, double wSalary):
    Employee(fname, lname, ssn){
        setWeeklySalary(wSalary);
    }
    

void SalariedEmployee::setWeeklySalary(double wSalary){
    if (wSalary < 0.0){
        throw invalid_argument("salary must be greater than or equal to 0");
    }
    weeklySalary = wSalary;
}

double SalariedEmployee::getWeeklySalary() const{
    return weeklySalary;
}

double SalariedEmployee::earnings() const {
    return getWeeklySalary();
}
string SalariedEmployee::toString() const {
    ostringstream output;
    output << fixed << setprecision(2);
    output << "Salaried Employee: "
        << Employee::toString()
        << "\n Weekly Salary: " << getWeeklySalary();
    return output.str(); 
}