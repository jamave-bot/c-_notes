#include "TwoDayPackage.h"
#include <sstream>
#include <stdexcept>

TwoDayPackage::TwoDayPackage(std::string sName, std::string sAddr, std::string sZip,
              std::string rName, std::string rAddr, std::string rZip, 
			  double weight, double cost, double fFee):Package(sName,sAddr,sZip,rName,rAddr,rZip,weight,cost)
{
	setFlatFee(fFee);
}

void TwoDayPackage::setFlatFee(double fFee)
{
	if(fFee <= 0)
		   throw std::invalid_argument("fee should be positive");
	flatFee = fFee;
}
double TwoDayPackage::getFlatFee() const{
	return flatFee; 
} 

double TwoDayPackage::calculateCost() const 
{
	return getFlatFee() + Package::calculateCost();
}

std::string TwoDayPackage::toString() const
{
	std::ostringstream output;
	
	output << Package::toString() 
	       << "\nFlat fee: " << getFlatFee();
	return output.str();
}

