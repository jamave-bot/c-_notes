#include "CircularDoublyLinkedList.h"
#include "ListNode.h"
#include <iostream>

using namespace std;


void instructions(){
    cout << "Testing a List of integer values" << endl
        << "Enter one of the following:" << endl
        << "1 to insert at beginning of list" << endl
        << "2 to insert at end of list" << endl
        << "3 to delete from beginning of list" << endl
        << "4 to delete from end of list" << endl
        << "5 to end list processing" << endl;
}


int main (){

    CircularDoublyLinkedList<int> mylist;

    int choice, value;

    instructions();
    cout << "?: ";
    cin >> choice;

    while (choice < 5){ // assume the user doesn't input 0 or negative
        switch (choice){
            case 1:
                cout << "Enter integer: ";
                cin >> value;
                mylist.insertAtFront(value);
                break;
            case 2:
                cout << "Enter integer: ";
                cin >> value;
                mylist.insertAtBack(value);
                break;
            case 3:
                if (mylist.removeFromFront(value)){
                    cout << value << " removed from the list" << endl;
                }
                break;
            case 4: 
                if (mylist.removeFromBack(value)){
                    cout << value << " removed from the list" << endl;
                }
                break;
        }
        mylist.print();
        cout << "?: ";
        cin >> choice;
    }

    return 0;
}