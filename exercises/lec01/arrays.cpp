/*
Write a program that simulates a shopping basket. 
Keep getting an item's name, number of items and its cost as input until 
the user enters “quit” string. 
Add the names into an array and calculate total cost. 
Display the array and the total cost. 
You may assume the basket can contain 20 items at most. 

Sample output:
    Enter item's name: milk 
    Enter item number: 2 
    Enter cost per item in $: 5 
    Enter item's name: eggs 
    Enter item number: 1 
    Enter cost per item in $: 2.45 
    Enter item's name: bread 
    Enter item number: 2 
    Enter cost per item in $: 1.43 
    Enter item's name: quit 
    ['milk', 'eggs', 'bread’] 
    Total cost:$15.31
*/

#include <iostream>
#include <string>
#include <array>
using namespace std;

int main(){
    string item;
    array<string,20> items;
    float total;
    int idx = 0; 

    while (idx !=  19){
        int quantity; 
        float cost;

        cout << "Enter item's name: ";
        cin >> item;
        if (item == "quit"){
            break;
        }
        items[idx] = item;
        idx++;

        cout << "Enter item number: ";
        cin >> quantity;

        cout << "Enter cost per item in $: ";
        cin >> cost;

        total = total + (cost * quantity);
    }


    cout << "[";
    for (size_t i = 0; i < idx; ++i){
        cout << "'" << items[i] << "'";
        if (i != idx - 1){
            cout << ", ";
        }
    }
    cout << "]" << endl;

    cout << "Total cost:$" << total;

    return 0;
}