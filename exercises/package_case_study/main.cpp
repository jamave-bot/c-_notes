#include <iostream>
#include "vector"
#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"
#include <cstdlib>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	
	vector<Package *> packages;
	
	string sName, sAddr, sZip, rName, rAddr, rZip;
	double weight, cost, fFee, aFee; 
	
	// get those values from the user
	cout << "Enter name:";
	getline(cin, sName); 
	
	
	
	
	
	TwoDayPackage * newpackage = new TwoDayPackage{sName, sAddr, sZip,
	                                               rName, rAddr, rZip,
												  weight, cost,fFee};
  
    OvernightPackage * newpackage2 = new OvernightPackage{"Sherlock Holmes", "221B baker st", "1123",
	                                               "John Watson", "43 Times Square", "4545",
												   2.5, 1.5, 2.0};
    
    packages.push_back(newpackage);
    packages.push_back(newpackage2);
    
    for(Package * p: packages)
    {
    	cout << p->toString() << endl; 
    	cout << "Cost: " << p->calculateCost() << endl;
    }
	
	return 0;
}
