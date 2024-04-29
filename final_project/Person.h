#ifndef PERSON_H
#define PERSON_H

#include <string>


class Person{
public:
    Person(std::string);

    std::string getFirstName();
    void setFirstName(std::string);
private:
    std::string firstName;
};

#endif