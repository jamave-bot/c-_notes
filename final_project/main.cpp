#include <iostream>
#include "BinarySearchTree.h"
#include "FamilyTree.h"
#include "Person.h"

using namespace std;

int main (){
    /* BST notes
    BinarySearchTree<int> intBst;

    cout << "Insert Element: ";
    int value;
    cin >> value;

    while(value != -1){
        intBst.insertNode(value);
        cout << "Insert element: ";
        cin >> value;
    }

    intBst.inOrderTraversal();

    cout << "Enter search key: ";
    cin >> value;

    while (value != -1){
        TreeNode<int> * resultPtr = intBst.searchKey(value);

        if (resultPtr == nullptr){
            cout << "Not found." << endl;
        } else {
            cout << "Found " << resultPtr->getData() << endl;
        }

        cout << "Enter search key: ";
        cin >> value;
    }
    */


    Person unknownBlack{"unknown", "Black"};
    cout << unknownBlack.toString();


    FamilyMember<Person>* unknownRoot = new FamilyMember<Person>{unknownBlack};

    Person SiriusI{"Sirius", "Black", "1845-1853"};
    FamilyTree<Person> blackFamilyTree(unknownRoot);




    return 0;
}