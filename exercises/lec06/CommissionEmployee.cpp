#include <iomanip>
#include <stdexcept>
#include <sstream>
#include "CommissionEmployee.h"

using namespace std;

CommissionEmployee::CommissionEmployee(string& fName, string& lName, 
                                       string& sn, double sales, double rate):firstName{fName},
                                       lastName{lName}, ssn{sn}  
{
    setGrossSales(sales);
    setCommissionRate(rate);    
}

//setters
void CommissionEmployee::setFirstName(string& fName){ firstName = fName; }
void CommissionEmployee::setLastName(string& lName){ lastName = lName;}
void CommissionEmployee::setSSN(string& sn){ ssn = sn; }

void CommissionEmployee::setGrossSales(double sales){
    if (sales < 0.0){
        throw invalid_argument("Sales must be greater than 0.");
    }

    grossSales = sales;
}

void CommissionEmployee::setCommissionRate(double rate){
    if (rate < 0.0 || rate > 1.0){
        throw invalid_argument("Rate must be between 0 and 1.");
    }

    commissionRate = rate;
}


// getters
string CommissionEmployee::getFirstName() const {return firstName;}
string CommissionEmployee::getLastName() const {return lastName;}
string CommissionEmployee::getSSN() const {return ssn;}
double CommissionEmployee::getGrossSales() const {return grossSales;} 
double CommissionEmployee::getCommissionRate() const {return commissionRate;}

// toString/earnings

string CommissionEmployee::toString() const{
    // we must use getter functions here if we plan on having this class be inherited
    // DO NOT DIRECTLY ACCESS DATA MEMBERS

    ostringstream output;
    output << "Employee name: " 
    << getFirstName() << " " << getLastName()
    << "\nSSN: " << getSSN()
    << "\nGross Sales: " << getGrossSales()
    << "\nCommission Rate: " << getCommissionRate();
    return output.str(); 
}

double CommissionEmployee::earnings() const{
    // we must use getter functions here if we plan on having this class be inherited
    // DO NOT DIRECTLY ACCESS DATA MEMBERS
    
    return getCommissionRate() * getGrossSales(); 
}