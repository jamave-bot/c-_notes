#include "Company.h"
#include "Employee.h"
#include "Date.h"
#include <string>
#include <iostream>
#include <array>

using namespace std;

int main(){

    // Employee *empList = new Employee[2];


    // empList[0] =  Employee("Jim", "bo", Date(2,12,2000), Date(3,4,1998));
    // empList[1] =  Employee("Jill", "boo",Date(3,6, 2000), Date(7,1, 2020));

    // Company aperture("aperture");
    // aperture.setEmployeeList(empList, 2);
    // cout << aperture.toString() << endl; 
    
    // *datePtr is created in the stack, the object itself is created inside the heap
    // The pointer is the only way we can access the newly created object
    // Date *datePtr = new Date{5 13, 1990};

    // Since this is in the heap, it does not delete automatically, we have to do it ourself
    // good practice to check if it's not nullPtr then delete
    // if (datePtr != nullptr){
    //     delete datePtr;
    //     datePtr = nullptr;
    // }
    // delete datePtr;

    //creating a list of Date objects using the heap
    // This creates an array of pointers in the heap
    // in order to make this call, there has to be no parameters
    // Date *dateArrayPtr = new Date[3];

    // to delete an array of object pointers, we have to use [] to indicate it's an array
    // good practice to check if it's not nullPtr then delete
    // if (dateArrayPtr != nullptr){
    //     delete [] dateArrayPtr;
    //     dateArrayPtr = nullptr;
    // }

    string companyName;
    int employeeNum;

    cout << "Enter company name: ";
    cin >> companyName;
    Company company{companyName};

    cout << "Enter number of employees: ";
    cin >> employeeNum;

    Employee *employeesArrPtr = new Employee[employeeNum]; // must have default values
    
    for (int i = 0; i < employeeNum; i++){
        string firstname, lastname;
        unsigned int birthMonth, birthDay, birthYear, hiredMonth, hiredDay, hiredYear;
        cout << "Employee " << i + 1 << ":" << endl;
        cout << "Enter firstname and lastname: ";
        cin >> firstname >> lastname;

        cout << "Enter birthDate: ";
        cin >> birthMonth >> birthDay >> birthYear; 
        cout << "enter hireDate: ";
        cin >> hiredMonth >> hiredDay >> hiredYear; 

        Date birthDate{birthMonth, birthDay, birthYear};
        Date hiredDate{hiredMonth, hiredDay, hiredYear};


        employeesArrPtr[i] = Employee{firstname, lastname, birthDate, hiredDate};;

        if (employeePtr != nullptr){
            delete employeePtr;
            employeePtr = nullptr;
        }
    }

    company.setEmployeeList(employeesArrPtr,employeeNum);
    company.toString();

    return 0;
}