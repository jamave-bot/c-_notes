#ifndef PERSON_H
#define PERSON_H

#include <string>


class Person{
public:
    Person(std::string fName, std::string lName, std::string years="", std::string sp="N/A");

    std::string getFirstName();
    std::string getLastName();
    std::string getYearsAlive();
    std::string getSpouse();


    void setFirstName(std::string);
    void setLastName(std::string);
    void setYearsAlive(std::string);
    void setSpouse(std::string);

    std::string toString(int indents = 0);
private:
    std::string firstName;
    std::string lastName;
    std::string yearsAlive;
    std::string spouse;
};

#endif