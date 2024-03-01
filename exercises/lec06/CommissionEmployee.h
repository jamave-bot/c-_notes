#ifndef COMM_EMP_H
#define COMM_EMP_H

#include <string>

class CommissionEmployee{
public:

    // since these are references, when we initialize, we must pass in variables
    CommissionEmployee(std::string&, std::string&, std::string&, double = 0.0, double = 0.0); // pass by value assuming the object is large
    void setFirstName(std::string&);
    void setLastName(std::string&);
    void setSSN(std::string&);
    void setGrossSales(double);
    void setCommissionRate(double);

    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getSSN() const;
    double getGrossSales() const;
    double getCommissionRate() const;

    std::string toString() const;
    double earnings() const;

private:
    std::string firstName;
    std::string lastName;
    std::string ssn;
    double grossSales{0.0}; //initialize primitive data
    double commissionRate{0.0};
};


#endif