#include "Stack.h"
#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    Stack<int> intStack;


    //push 10 random elements
    for (int i = 0; i < 10; i++ ){
        int val = rand()%10;
        intStack.push(val);
    }

    // print the elements using printStack function
    intStack.printStack();
    // pop all elements from the stack 
    while (!intStack.isEmpty()){
        // at every element's removal printStack over and over
        intStack.printStack();
        intStack.pop();
    }



    return 0;
}