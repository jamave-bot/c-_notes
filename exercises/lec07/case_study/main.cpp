//
//  main.cpp
//  Account_inheritance
//
//  Created by esma yildirim on 2/28/23.
//

#include <iostream>
#include "BasePlusCommissionEmployee.h"
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    
    string fname = "Jimmy";
    string lname = "Slippin";
    string ssn = "1111";
    

    BasePlusCommissionEmployee bplusemp{fname, lname, ssn, 100, 0.50, 1000};

    cout << bplusemp.toString();

    return 0;
}
