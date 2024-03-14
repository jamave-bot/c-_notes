//
//  main.cpp
//  Account_inheritance
//
//  Created by esma yildirim on 2/28/23.
//

#include <iostream>
#include "BasePlusCommissionEmployee.h"
#include <string>
#include "SalariedEmployee.h"
using namespace std;

int main(int argc, const char * argv[]) {
    
    string fname = "Slippin";
    string lname = "Jimmy";
    string ssn = "1111";
    
    SalariedEmployee salariedEmp{fname, lname, ssn, 1000};

    cout << salariedEmp.toString();

    return 0;
}
