#include "Derived.h"
#include <sstream>
#include <iostream>
#include <string>


Derived::Derived(int x, int * yptr):Base(x){
    this->yptr = yptr; // variable takes precendece
}

Derived::~Derived(){
    if (yptr != nullptr){
        delete yptr;
    }
    std::cout << "derived destructor" << std::endl;
}

int Derived::funA(){
    if (yptr != nullptr){
        return getX() * *yptr;
    } else {
        return Base::funA();
    }
} 

std::string Derived::toString(){
    std::ostringstream output;
    output << std::endl <<  Base::toString() << "yptr = " << *yptr << std::endl;
    return output.str();
}
