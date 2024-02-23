#include "DriverLicense.h"
#include <stdexcept>
#include <string>
#include <array>
#include <sstream>
#include <iostream>


DriverLicense::DriverLicense(){}

DriverLicense::DriverLicense(std::string iid, std::string fName, std::string
lName, std::string addr, Date iDate, Date eDate, Date dob, int feet, int
inches, std::string lType, std::string eColor, std::string gen)
{
    //callSetters
    setID(iid);
    setFirstName(fName);
    setLastName(lName);
    setAddress(addr);
    setIssueDate(iDate);
    setExpDate(eDate);
    setDateOfBirth(dob);
    setHeightFeet(feet);
    setHeightInches(inches);
    setLicenseType(lType);
    setEyeColor(eColor);
    setGender(gen);
}

void DriverLicense::setID(std::string iid){
    if (iid.size() != 9){
        throw std::invalid_argument("Invalid ID: 9 digits required.");
    }

    for (int i = 0; i < iid.size(); i++){
        if ( (int(iid[i]) < 48) || (int(iid[i]) > 57) ){
            throw std::invalid_argument("Invalid ID: only digits allowed.");
        }
    }

    ID = iid;
}


void DriverLicense::setHeightFeet(int h){
    if (h < 0){
        throw std::invalid_argument("Height feet must be positive.");
    } 
    heightFeet = h;
}


void DriverLicense::setHeightInches(int h){
    if (h < 0){
        throw std::invalid_argument("Height inches must be positive.");
    } 
    heightInches = h;
}

void DriverLicense::setLicenseType(std::string ltype){
    static const std::array<std::string, 8> types = {"A", "B", "C", "D", "DJ","E", "M", "MJ"};
    bool isMatch = false;

    for (int i = 0; i < types.size(); i++){
        if (ltype == types[i]){
            isMatch = true;
            break;
        }
    }

    if (isMatch){
        licenseType = ltype;
    }else{
        throw std::invalid_argument("Invalid license type.");
    }
}

void DriverLicense::setGender(std::string gtype){
    static const std::array<std::string, 3> genders = {"M", "F", "X"};
    bool isMatch = false;

    for (int i = 0; i < genders.size(); i++){
        if (gtype == genders[i]){
            isMatch = true;
            break;
        }
    }

    if (isMatch){
        gender = gtype;
    }else{
        throw std::invalid_argument("Gender is invalid. Use M F or X");
    }   
}

void DriverLicense::setExpDate(Date eDate){expDate = eDate;}
void DriverLicense::setIssueDate(Date iDate){issueDate = iDate;}
void DriverLicense::setDateOfBirth(Date dob){dateOfBirth = dob;}
void DriverLicense::setFirstName(std::string fName){firstName = fName;}
void DriverLicense::setLastName(std::string lName){lastName = lName;}
void DriverLicense::setAddress(std::string addr){address = addr;}
void DriverLicense::setEyeColor(std::string color){eyeColor = color;}


// Getter functions

int DriverLicense::getHeightFeet() const {return heightFeet;}
int DriverLicense::getHeightInches() const {return heightInches;}
Date DriverLicense::getExpDate() const {return expDate;}
Date DriverLicense::getIssueDate() const {return issueDate;}
Date DriverLicense::getDateOfBirth() const {return dateOfBirth;}
std::string DriverLicense::getID() const {return ID;}
std::string DriverLicense::getFirstName() const {return firstName;}
std::string DriverLicense::getLastName() const {return lastName;}
std::string DriverLicense::getAddress() const {return address;}
std::string DriverLicense::getLicenseType() const {return licenseType;}
std::string DriverLicense::getEyeColor() const {return eyeColor;}
std::string DriverLicense::getGender() const {return gender;}

std::string DriverLicense::toString() const {
    std::ostringstream output;
    output << "ID: "<< getID() << " " << "Fullname: "<< getFirstName()<< " " << getLastName() << "\n";
    output << "Address: " <<getAddress() << "\n";
    output <<"Issue date: " << getIssueDate().toString() << " Expiration date: " << getExpDate().toString() << "\n";
    output << "DOB: "<< getDateOfBirth().toString() << "\n";
    output << "Height: " << getHeightFeet() <<"\'"<< getHeightInches()<< "\"" << "\n"; 
    output << "Gender: " << getGender() << " License type: " << getLicenseType();
    return output.str();
}
