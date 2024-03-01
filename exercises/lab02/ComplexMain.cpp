#include "Complex.h"
#include <iostream>
#include <string>

using namespace std;

int main(){
    /* PART 1 TESTING
    Complex c1{3,5};
    Complex c2{-4,7};

    cout << "c1: " << c1 << endl;
    cout << "c2: " << c2 << endl;

    cout << "Addition: " << (c1+c2) << endl;
    cout << "Subtraction: " << (c1-c2) << endl;
    cout << "Multiplication: " << (c1*c2) << endl;
    cout << "Division: " << (c1/c2) << endl;

    Complex c3;

    cout << "Enter new complex object in (real, imaginary) format: ";
    cin >> c3;

    cout << "c3: " << c3 << endl;

    cout << "c1 == c2 : " << (c1 == c2) << endl;
    cout << "c1 != c2 : " << (c1 != c2) << endl; 
    
    */

    cout << "Welcome to your complex calculator:" << endl;
    cout << "Enter your complex numbers in the following format: (r, i)" << endl;
    cout << "Possible operations: + - / *" << endl;
    cout << "?: ";

    Complex complexNum1, complexNum2, answer;
    string operation;
   
    while (cin >> complexNum1){
        cin >> std::ws;
        cin >> operation;
        cin >> std::ws;
        cin >> complexNum2;

        if (operation == "+") {
            answer = complexNum1 + complexNum2;
        } else if (operation == "-"){
            answer = complexNum1 - complexNum2;
        } else if (operation == "*"){
            answer = complexNum1 * complexNum2;
        } else if (operation == "/"){
            answer = complexNum1 / complexNum2;
        }
        cout <<  "= " << answer << endl;
        cout << "?: ";
        cin >> std::ws;
    }

    return 0;
};