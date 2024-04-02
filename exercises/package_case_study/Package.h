#ifndef PACKAGE_H
#define PACKAGE_H

#include <string>

class Package{
public:
    // constructor/destructor
    Package(std::string, std::string, std::string, std::string, std::string, std::string, double, double);
    virtual ~Package() = default;

    // setters
    void setSenderName(std::string);
    void setSenderAddress(std::string);
    void setSenderZipcode(std::string);
    void setRecvName(std::string);
    void setRecvAddress(std::string);
    void setRecvZipcode(std::string);
    void setWeightInOunces(double);
    void setCostPerOunce(double);

    // getters
    std::string getSenderName() const;
    std::string getSenderAddress() const;
    std::string getSenderZipcode() const;
    std::string getRecvName() const;
    std::string getRecvAddress() const;
    std::string getRecvZipcode() const;
    double getWeightInOunces() const;
    double getCostPerOunce() const;

    // virtual functions
    virtual double calculateCost() const;
    virtual std::string toString() const;
private:
    std::string senderName;
    std::string senderAddress;
    std::string senderZipcode;
    std::string recvName; 
    std::string recvAddress;
    std::string recvZipcode;
    double weightInOunces{0.0};
    double costPerOunce{0.0};
};

#endif