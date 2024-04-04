#ifndef PACKAGE_H
#define PACKAGE_H
#include <string>
class Package{
public:
	//constructor and destructor
	Package(std::string, std::string, std::string, std::string, std::string, std::string, double, double);
	virtual ~Package() = default;
	//setters
	void setSenderName(std::string);
	void setSenderAddr(std::string);
	void setSenderZip(std::string);
	void setRecvName(std::string);
	void setRecvAddr(std::string);
	void setRecvZip(std::string);
	void setWeightInOunces(double);
	void setCostPerOunce(double);
	//getters
	std::string getSenderName() const;
	std::string getSenderAddr() const;
	std::string getSenderZip() const;
	std::string getRecvName() const;
	std::string getRecvAddr() const;
	std::string getRecvZip() const; 
	double getWeightInOunces() const;
	double getCostPerOunce() const; 
	//virtual functions 
	virtual double calculateCost() const; 
	virtual std::string toString() const; 
	
	
private:
	std::string senderName; 
	std::string senderAddr;
	std::string senderZip;
	std::string recvName;
	std::string recvAddr; 
	std::string recvZip; 
	double weightInOunces;
	double costPerOunce; 
};

#endif
