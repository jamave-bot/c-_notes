// File to test Time class
// NOTE: this file must be compiled with Time.cpp
#include <iostream>
#include <stdexcept> // invalid_argument exception class
#include "Time.h" // definition of class Time

using namespace std;

// displays a Time in 24-hour and 12-hour formats
void displayTime(const string& message, const Time& time){
    cout << message << "\nUniversal time: " << time.toUniversalString() << "\nStandard Time: " << time.toStandardString() << "\n\n";
}

int main(){
    Time t; //instantiate object t of class Time

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
}