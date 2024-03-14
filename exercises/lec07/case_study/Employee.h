#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>

class Employee{
public:
    Employee(const std::string&, const std::string&, const std::string&);
    virtual ~Employee() = default; // pure virtual, no implementation in cpp file needed

    void setFirstName(const std::string&); // set first name
    std::string getFirstName() const; // return first name

    void setLastName(const std::string&); // set last name
    std::string getLastName() const; // return last name

    void setSocialSecurityNumber(const std::string&); // set SSN
    std::string getSocialSecurityNumber() const; // return SSN

    // adding the =0 makes this class abstract since there is no implementation
    // this makes it a pure virtual function
    // in other words, if we have a pure virtual function, the class is abstract
    virtual double earnings() const = 0; // calculate earnings (Pure virtual function)
    virtual std::string toString() const; // create string representation
private:
    std::string firstName;
    std::string lastName;
    std::string socialSecurityNumber;
};


#endif