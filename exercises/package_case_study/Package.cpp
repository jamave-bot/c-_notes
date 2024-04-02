#include "Package.h"
#include <string>
#include <stdexcept>
#include <sstream>

Package::Package(std::string sName, std::string sAddress, std::string sZip, std::string rName, std::string rAddress, std::string rZip, double weight, double cost){
    setSenderName(sName);
    setSenderAddress(sAddress);
    setSenderZipcode(sZip);
    setRecvName(rName);
    setRecvAddress(rAddress);
    setRecvZipcode(rZip);
    setWeightInOunces(weight);
    setCostPerOunce(cost);
}


//setters
void Package::setSenderName(std::string sName){
    senderName = sName;
}
void Package::setSenderAddress(std::string sAddress){
    senderAddress = sAddress;
}
void Package::setSenderZipcode(std::string sZip){
    senderZipcode = sZip;
}
void Package::setRecvName(std::string rName){
    recvName = rName;
}
void Package::setRecvAddress(std::string rAddress){
    recvAddress = rAddress;
} 
void Package::setRecvZipcode(std::string rZip){
    recvZipcode = rZip;
}
// must be >0
void Package::setWeightInOunces(double weight){
    if (weight <= 0){
        throw invalid_argument("Weight should be positive")
    } else{
        weightInOunces = weight;
    }
}
void Package::setCostPerOunce(double cost){
    if (cost <= 0){
        throw invalid_argument("Cost should be positive")
    } else{
        costPerOunce = cost;
    }
}

// getters
std::string Package::getSenderName() const{return senderName};
std::string Package::getSenderAddress() const{return senderAddress};
std::string Package::getSenderZipcode() const{return senderZipcode};
std::string Package::getRecvName() const{return recvName};
std::string Package::getRecvAddress() const{return recvAddress};
std::string Package::getRecvZipcode() const{return recvZipcode};
double Package::getWeightInOunces() const {return weightInOunces};
double Package::getCostPerOunce() const{return costPerOunce};


// virtual functions
double Package::calculateCost() const{
    return getWeightInOunces() * getCostPerOunce();
}

std::string Package::toString() const{
    std::ostringstream output; 
    output << "Sender: " << getSenderName()
        << "\nAddress: " << getSenderAddress()
        << "\nZip: " << getSenderZipcode()
        << "\nReceiver: " << getRecvName()
        << "\nAddress: " << getRecvAddress()
        << "\nZip " << getRecvZipcode()
        << "\nWeight in Ounces: " << getWeightInOunces()
        << "\nCost per ounce: " << getCostPerOunce();

    return output.str();
}