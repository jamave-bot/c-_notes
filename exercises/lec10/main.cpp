#include <iostream>
#include "List.h"
#include "ListNode.h"

using namespace std;

int main(){

    List<double> myforwardlist; 

    for (size_t i = 0; i < 5; i++){
        cout << "Enter a double: ";
        double value;
        cin >> value;
        myforwardlist.insertAtBack(value);
    }

    myforwardlist.print();

    double newValue = 23.1;
    myforwardlist.insertAtPosition(2, newValue);

    myforwardlist.print();

    return 0;
}