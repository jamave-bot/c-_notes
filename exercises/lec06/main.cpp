#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"
#include <iostream>
#include <string>

using namespace std;

int main(){
    // since these are references in the constructor, when we initialize, we must pass in variables
    
    string fName = "Jim";
    string lName = "Jam";
    string sn = "123123123";
    // CommissionEmployee emp{fName, lName, sn, 500, 0.5 };

    // cout << emp.toString() << endl;
    // cout << "Earnings: " << emp.earnings() << endl;
    

    BasePlusCommissionEmployee baseEmp{fName, lName, sn, 500, 0.5, 1000};
    cout << baseEmp.toString() << endl;
    cout << "Earnings: " << baseEmp.earnings() << endl;


    return 0;
}