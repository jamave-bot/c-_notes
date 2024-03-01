#ifndef BPLUS_EMPLOYEE_H
#define BPLUS_EMPLOYEE_H

#include <string>
#include "CommissionEmployee.h"

class BasePlusCommissionEmployee: public CommissionEmployee{
public:
    BasePlusCommissionEmployee(std::string&, std::string&, std::string&, 
                              double=0.0, double=0.0, double=0.0);

    void setBaseSalary(double) ;
    double getBaseSalary() const;
    double earnings() const;
    std::string toString() const;

private:
    double baseSalary{0.0}; // initialize primitive values
};

#endif