#ifndef STACK_H
#define STACK_H

#include <deque>
#include <iostream>

using namespace std;

template <typename STACKTYPE> // STACKTYPE can be any name, placeholder for class we expect
class Stack: private deque<STACKTYPE>{
public:
    void push(STACKTYPE & element){ // implementations must be done in header file
        this->push_front(element);
    }

    // whenever a function doesn't use the datatype in the parameter, we must use 
    // this-> pointer notation
    bool isEmpty(){
        return this->empty();
    }

    bool pop(){
        if (this->isEmpty()){
            return false;
        } else {
            this->pop_front();
            return true;
        }
    }

    size_t size(){
        return deque<STACKTYPE>::size(); // must use it this way since they have th esame name
    }

    void printStack(){
        // for(size_t i = 0; i < this->size(); i++){ // size_t used to explicitly say it's for a size
        //     cout << this->at(i) << " ";
        // }
        // cout << endl;

        // iterator version
        for (auto it = this->cbegin(); it != this->cend(); it++){
            cout << *it << " ";
        }
    }
};


#endif