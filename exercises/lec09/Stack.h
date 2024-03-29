#ifndef STACK_H
#define STACK_H

#include <deque>
#include <iostream>

using namespace std;

template <typename STACKTYPE> // STACKTYPE can be any name, placeholder for class we expect
class Stack{
public:
    void push(STACKTYPE & element){ // implementations must be done in header file
        this->mystack.push_front(element);
    }

    // whenever a function doesn't use the datatype in the parameter, we must use 
    // this-> pointer notation
    bool isEmpty(){
        return this->mystack.empty();
    }

    bool pop(){
        if (this->isEmpty()){
            return false;
        } else {
            this->mystack.pop_front();
            return true;
        }
    }

    size_t size(){
        return this->mystack.size();
    }

    void printStack(){
        for(size_t i = 0; i < this->mystack.size(); i++){ // size_t used to explicitly say it's for a size
            cout << this->mystack[i] << " ";
        }
        cout << endl;
    }


private:
    deque<STACKTYPE> mystack; // deque of STACKTYPE datamember named mystack of 
};


#endif