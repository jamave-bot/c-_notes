#ifndef SALARIED_H
#define SALARIED_H

#include "Employee.h"
#include <string>

class SalariedEmployee : public Employee{
public: 
    SalariedEmployee(const std::string&, const std::string&,
      const std::string&, double = 0.0);
    virtual ~SalariedEmployee() = default;

    void setWeeklySalary(double = 0.0);
    double getWeeklySalary() const;

    virtual double earnings() const  override; // calculate earnings (Pure virtual function)
    virtual std::string toString() const override;
private:
    double weeklySalary{0.0};
};

#endif