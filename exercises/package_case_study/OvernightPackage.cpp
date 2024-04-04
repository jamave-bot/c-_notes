#include "OvernightPackage.h"
#include <sstream>
#include <stdexcept>

OvernightPackage::OvernightPackage(std::string sName, std::string sAddr, std::string sZip,
              std::string rName, std::string rAddr, std::string rZip, 
			  double weight, double cost, double fFee):Package(sName,sAddr,sZip,rName,rAddr,rZip,weight,cost)
{
	setAdditionalFee(fFee);
}

void OvernightPackage::setAdditionalFee(double fFee)
{
	if(fFee <= 0)
		   throw std::invalid_argument("fee should be positive");
	additionalFee = fFee;
}
double OvernightPackage::getAdditionalFee() const{
	return additionalFee; 
} 

double OvernightPackage::calculateCost() const 
{
	return getWeightInOunces() * getAdditionalFee() + Package::calculateCost();
}

std::string OvernightPackage::toString() const
{
	std::ostringstream output;
	
	output << Package::toString() 
	       << "\nAdditional fee: " << getAdditionalFee();
	return output.str();
}

