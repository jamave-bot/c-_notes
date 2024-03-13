#ifndef DERIVED_H
#define DERIVED_H

#include "Base.h"
#include <string>
#include <sstream>
#include <iostream>

class Derived: public Base{
public: 
    Derived(int, int *);
    virtual ~Derived(); // do not need override 
    virtual int funA() override; // syntax for overriding function
    virtual std::string toString() override;


private:
    int * yptr{nullptr}; //initialize yptr to a nullptr

};

#endif