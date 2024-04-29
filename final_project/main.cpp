#include <iostream>
#include "BinarySearchTree.h"

using namespace std;

int main (){
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

    return 0;
}