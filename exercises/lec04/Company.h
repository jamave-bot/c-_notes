#ifndef COMPANY_H
#define COMPANY_H

#include "Employee.h"
#include <string>

class Company{
    public:
        explicit Company(std::string);
        ~Company();
        void setEmployeeList(Employee * , int );
        std::string toString() const;
    private:
        std::string compName;
        int employeeCount{0}; // When dealing with primitive date types, make it a habit to initialize with default 
        Employee *employeeList{nullptr}; // always initialize pointers to nullptr
};

#endif