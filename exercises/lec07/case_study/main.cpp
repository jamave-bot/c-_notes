//
//  main.cpp
//  Account_inheritance
//
//  Created by esma yildirim on 2/28/23.
//

#include <iostream>
#include "BasePlusCommissionEmployee.h"
#include <string>
#include <vector> // like an array with not fixed size
#include "SalariedEmployee.h"
using namespace std;

int main(int argc, const char * argv[]) {
    
    string fname = "Slippin";
    string lname = "Jimmy";
    string ssn = "1111";
    
    CommissionEmployee commEmp{fname, lname, ssn, 500, 0.4};
    SalariedEmployee salariedEmp{fname, lname, ssn, 1000};
    BasePlusCommissionEmployee bPlusEmp{fname, lname, ssn, 100, 0.5, 1000};


    // declare vectors with vector<type of objects> "name of vector" = {contents, of, vector}, in this case, employee pointers
    vector<Employee *> myEmployees = {&commEmp, &salariedEmp, &bPlusEmp};

    // vectors are compatible with this way of iteration
    for (Employee *ptr: myEmployees){ // we call each element a ptr, denoted by the *
        cout << ptr->toString();
        cout << "\nEarnings: " << ptr->earnings() << endl << endl; 
    }


    return 0;
}
