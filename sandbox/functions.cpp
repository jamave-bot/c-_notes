/*
Write a function Log3() that takes a positive integer value n and returns lower bound log base_3 of it (Hint: Divide the number by 3 until its division by 3 becomes 0 and count how many times you divided). 
Sample output1:
    Enter n: 9
    Log3(9) = 2
Sample output2:
    Enter n: 81
    Log3(81) = 4
*/

#include <iostream>
using namespace std;

int Log3(){
    int returnNum = 0, num;
    cout << "Enter n: ";
    cin >> num;
    int check_value = num;

    while (check_value/3 != 0){
        check_value = check_value/3;
        returnNum++;
    }

    cout <<  "Log3(" << num << ") = " << returnNum << endl; 
    return 0;
}

int main(){
    Log3();
    return 0;
}
