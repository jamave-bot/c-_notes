#include "Package.h"
#include <stdexcept>
#include <string>
#include <sstream>
Package::Package(std::string sName, std::string sAddr, std::string sZip , 
                 std::string rName, std::string rAddr, std::string rZip, 
				 double weight, double cost)
{
	setSenderName(sName);
	setSenderAddr(sAddr);
	setSenderZip(sZip);
	setRecvName(rName);
	setRecvAddr(rAddr);
	setRecvZip(rZip);
	setWeightInOunces(weight);
	setCostPerOunce(cost);
}

	void Package::setSenderName(std::string sName){
		senderName = sName;
	}
	void Package::setSenderAddr(std::string sAddr){
		senderAddr = sAddr;
	}
	void Package::setSenderZip(std::string sZip){
		senderZip = sZip;
	}
	void Package::setRecvName(std::string rName){
		recvName = rName;
	}
	void Package::setRecvAddr(std::string rAddr)
	{
		recvAddr = rAddr; 
	}
	void Package::setRecvZip(std::string rZip)
	{
		recvZip = rZip;
	}
	void Package::setWeightInOunces(double weight)
	{
		if(weight <= 0)
		    throw std::invalid_argument("weight should be positive");
		weightInOunces = weight;
	}
	void Package::setCostPerOunce(double cost)
	{
		if(cost <= 0)
		   throw std::invalid_argument("cost should be positive");
		costPerOunce = cost; 
	}
	//getters
	std::string Package::getSenderName() const {return senderName;}
	std::string Package::getSenderAddr() const {return senderAddr;}
	std::string Package::getSenderZip() const {return senderZip;}
	std::string Package::getRecvName() const {return recvName;}
	std::string Package::getRecvAddr() const {return recvAddr;}
	std::string Package::getRecvZip() const { return recvZip;}
	double Package::getWeightInOunces() const {return weightInOunces;}
	double Package::getCostPerOunce() const {return costPerOunce;}
	
	double Package::calculateCost() const
	{
		return getWeightInOunces()* getCostPerOunce();
	}
	
	std::string Package::toString() const
	{
		std::ostringstream output;
		output << "Sender: " << getSenderName()
               << "\nAddress: " << getSenderAddr()
			   << "\nZip: " << getSenderZip() 
               << "\nReceiver: " << getRecvName()
               << "\nAddress: " << getRecvAddr()
               << "\nZip: " << getRecvZip()
               << "\nWeight in Ounces: " << getWeightInOunces()
               << "\nCost per ounce: " << getCostPerOunce();

		return output.str();
	}
	
	
