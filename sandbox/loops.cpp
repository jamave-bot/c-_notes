/*
Write a program that inputs a number N from the user and prints 
the following NxN matrix.
    For example: If N is 5
    Sample output:
    Enter N: 5
    1 1 1 1 1
    0 1 1 1 1
    0 0 1 1 1 
    0 0 0 1 1 
    0 0 0 0 1
*/

#include <iostream>
using namespace std;

int main(){
    /*
    Initialize num to get input from user
    Get max amount of chars to ouput based on input
    */
    
    int num, maxChars;
    cout << "Enter N: "; // 5
    cin >> num;

    maxChars = num*num; //25 

    for (int i = 0; i < maxChars; i++){
        int row = i/num; // 0/5 = 0, 1/5 = 0, 6/5 = 1, 7/5 = 1 
        int column = i % num; // 0%5 = 0, 1%5 = 1, 6 % 5 = 1, 7 % 5 = 2;

        // cout << row;
        // cout << column;

        /*
        if the row value is less than or equal to the column value, which will never exceed 4,
        we input 1, otherwise 0
        */ 
        if (row <= column){
            cout << "1 ";
        } else {
            cout << "0 ";
        }

        /*
        when we hit num - 1 for colums, (num - 1) because num is the max amount 
        of rows/columns but we start the column count with 0
        we know we've hit the last column so we add endl 
        */ 
        if (column == num - 1){
            cout << endl;
        }
    }


    return 0;
}