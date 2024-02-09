// File to test Time class
// NOTE: this file must be compiled with Time.cpp
// #include <iostream>
// #include <stdexcept> // invalid_argument exception class
// #include "Time.h" // definition of class Time

// using namespace std;

// // displays a Time in 24-hour and 12-hour formats
// void displayTime(const string& message, const Time& time){
//     cout << message << "\nUniversal time: " << time.toUniversalString() << "\nStandard Time: " << time.toStandardString() << "\n\n";
// }

// int main(){
//     Time t; //instantiate object t of class Time

//     displayTime("Initial time:", t); //displays t's intial value

//     t.setTime(13,27, 6); // change time
//     displayTime("After setTime: ", t); // displays t's new value

//     //attempt to set the time with invalid values
//     try {
//         t.setTime(99,99,99);
//     } 
//     catch (invalid_argument& e){
//         cout << "Exception:" << e.what() << "\n\n";
//     }

//     //display t's value after attempting to set an invalid time
//     displayTime("After attempting to set an invalid time:", t);
// }

#include <iostream>
#include <stdexcept> // invalid_argument exception class
#include "Time.h" // definition of class Time

using namespace std;

// displays a Time in 24-hour and 12-hour formats
void displayTime(const string& message, const Time& time){
    cout << message << "\nUniversal time: " << time.toUniversalString() << "\nStandard Time: " << time.toStandardString() << "\n\n";
}

int main(){
    Time t(23,45,12); //instantiate object t of class Time
    Time t2(2,10); //instantiate object t of class Time
    Time t3(4); //instantiate object t of class Time
    Time t4(); //instantiate object t of class Time

    // we can use references/ptrs 
    Time & timeRef = t2;
    Time *timePtr = &t;

    //if we want to use the pointer, we have to use the arrow notation
    timePtr->setTime(12,27,6);

    //we don't have to do this with references
    timeRef.setTime(12,27,6);

    displayTime("Initial time:", t); //displays t's intial value

    t.setTime(13,27, 6); // change time
    displayTime("After setTime: ", t); // displays t's new value

    //attempt to set the time with invalid values
    try {
        t.setTime(99,99,99);
    } 
    catch (invalid_argument& e){
        cout << "Exception:" << e.what() << "\n\n";
    }

    //display t's value after attempting to set an invalid time
    displayTime("After attempting to set an invalid time:", t);
};