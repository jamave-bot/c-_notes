#ifndef O_PACKAGE_H
#define O_PACKAGE_H
#include "Package.h"

class OvernightPackage:public Package{
public:
   OvernightPackage(std::string, std::string, std::string, std::string, std::string, std::string, double, double, double);
   virtual ~OvernightPackage() = default; 
   void setAdditionalFee(double);
   double getAdditionalFee() const; 	
   virtual double calculateCost() const override; 
   virtual std::string toString() const override; 
	
private: 
   double additionalFee{0.0};	
};

#endif
