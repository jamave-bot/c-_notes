// Time.cpp
// Time class member-function definitions
#include <iomanip> // for setw and setfill stream manipulators
#include <stdexcept> // for invalid_argument exception class
#include <sstream> // for ostringstream class
#include <string>
#include "Time.h" // include definition of class Time from Time.h

using namespace std;

void Time::setTime(int h, int m, int s){
    // valudate hour, minute and second
    if ((h >= 0 && h < 24) && (m >= 0 && m < 60) && (s >= 0 && s < 60)){
        hour = h;
        minute = m;
        second = s;
    } else {
        throw invalid_argument( // special keyword + exception class
            "hour, minute, and/or second range is wrong");
    }
}

// return Time as a string in universal-time format (HH:MM:SS)
string Time::toUniversalString() const{
    ostringstream output;
    output << setfill('0') << setw(2) << hour << ":" << setw(2) << minute << ":" << setw(2) << second;
    return output.str(); // returns the formatted string
}

// return Time as string in standard-time format (HH:MM:SS AM or PM)
string Time::toStandardString() const{
    ostringstream output; 
    output << ((hour == 0 || hour == 12) ? 12: hour % 12 ) << ":" << setfill('0') << setw(2) << minute << ":" << setw(2) << second << (hour < 12 ? " AM" : " PM");
    return output.str(); // returns the formatted string
}

// to compile: run g++ -c Time.cpp
// 