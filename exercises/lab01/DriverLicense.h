/* 
DriverLicense class has the following data members:
ID, firstName, lastName, address, expDate, i
ssueDate, dateOfBirth, heightFeet, heightInches,
licenseType, eyeColor, gender

heightFeet and heightInches are integer values.
expDate, issueDate and dateOfBirth are Date objects.
The rest of the data members are all strings.
*/

#ifndef DLICENSE_H
#define DLICENSE_H

#include <string>
#include <array>
#include "Date.h"

class DriverLicense{
public:
    DriverLicense();
    DriverLicense(std::string iid, std::string fName, std::string lName, std::string addr, Date iDate, Date eDate, Date dob, int feet, int inches, std::string lType, std::string eColor, std::string gen);

    void setID(std::string);
    void setHeightFeet(int);
    void setHeightInches(int);
    void setLicenseType(std::string);
    void setGender(std::string);
    void setExpDate(Date);
    void setIssueDate(Date);
    void setDateOfBirth(Date);
    void setFirstName(std::string);
    void setLastName(std::string);
    void setAddress(std::string);
    void setEyeColor(std::string);

    int getHeightFeet() const;
    int getHeightInches()const;
    Date getExpDate()const;
    Date getIssueDate()const;
    Date getDateOfBirth()const;
    std::string getID()const;
    std::string getFirstName()const;
    std::string getLastName()const;
    std::string getAddress()const;
    std::string getLicenseType()const;
    std::string getEyeColor()const;
    std::string getGender()const;

    std::string toString() const;

private:
    int heightFeet{0}; // primitive data type, should give default
    int heightInches{0};
    Date expDate;
    Date issueDate;
    Date dateOfBirth;
    std::string ID; //can use size function and compare values 48 <= x <= 57
    std::string firstName;
    std::string lastName;
    std::string address; 
    std::string licenseType;
    std::string eyeColor;
    std::string gender;
};

#endif