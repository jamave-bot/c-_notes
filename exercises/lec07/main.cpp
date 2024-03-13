#include "Base.h"
#include "Derived.h"
#include <iostream>
#include <string>

using namespace std;

int main(){
    
    // Base baseObject{4};

    // created in the heap
    int * yptrheap = new int; // pointing to the heap w/ keyword new
    *yptrheap = 6;

    // created in the heap
    Derived *derivedObjectPtr = new Derived{4, yptrheap};

    // creating a base class pointer but pointing it to  derivedObjectPtr
    Base *baseptr = derivedObjectPtr; 

    cout << baseptr->funA() << endl;
    cout << baseptr->toString() << endl;

    delete baseptr;

    return 0;
}