#ifndef TW_PACKAGE_H
#define TW_PACKAGE_H
#include "Package.h"

class TwoDayPackage:public Package{
public:
   TwoDayPackage(std::string, std::string, std::string, std::string, std::string, std::string, double, double, double);
   virtual ~TwoDayPackage() = default; 
   void setFlatFee(double);
   double getFlatFee() const; 	
   virtual double calculateCost() const override; 
   virtual std::string toString() const override; 
	
private: 
   double flatFee{0.0};	
};

#endif
