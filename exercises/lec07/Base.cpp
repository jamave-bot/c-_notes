#include "Base.h"
#include <sstream>
#include <string>
#include <iostream>

Base::Base(int x){
    this->x = x;
}



// Base::~Base(){
//     std::cout << "Base destructor";
// }




int Base::funA(){
    return x*x;
}

std::string Base::toString(){
    std::ostringstream output;
    output << "X = " << getX();
    return output.str();
}

int Base::getX() const {
    return x;
}