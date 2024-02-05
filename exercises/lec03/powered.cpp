/*
Write a function powered() that takes two parameters: 
a pointer numPtr to an integer number, 
and an integer power value. 
The function takes the power of the number pointed by numPtr and sets the result 
as the new value of the number pointed by numPtr. 
The function does not return anything. Test your function.

Sample output: 
Enter an integer and its power: 3 4
Result is 81
*/

#include <iostream>

using namespace std;

void powered(int* numPtr, int num){
    int result = 1;
    for (int i = 0; i < num; i++) {
        result = result * *numPtr;
    }
    *numPtr = result;
}

// int main() {
//     int number, power;

//     cout << "Enter an integer and its power: ";
//     cin >> number >> power;

//     powered(&number, power);

//     cout << "Result is " << number << endl;

//     return 0;
// }