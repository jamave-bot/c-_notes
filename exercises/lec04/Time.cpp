// Time.cpp
// Time class member-function definitions
// #include <iomanip> // for setw and setfill stream manipulators
// #include <stdexcept> // for invalid_argument exception class
// #include <sstream> // for ostringstream class
// #include <string>
// #include "Time.h" // include definition of class Time from Time.h

// using namespace std;

// void Time::setTime(int h, int m, int s){
//     // valudate hour, minute and second
//     if ((h >= 0 && h < 24) && (m >= 0 && m < 60) && (s >= 0 && s < 60)){
//         hour = h;
//         minute = m;
//         second = s;
//     } else {
//         throw invalid_argument( // special keyword + exception class
//             "hour, minute, and/or second range is wrong");
//     }
// }

// // return Time as a string in universal-time format (HH:MM:SS)
// string Time::toUniversalString() const{
//     ostringstream output;
//     output << setfill('0') << setw(2) << hour << ":" << setw(2) << minute << ":" << setw(2) << second;
//     return output.str(); // returns the formatted string
// }

// // return Time as string in standard-time format (HH:MM:SS AM or PM)
// string Time::toStandardString() const{
//     ostringstream output; 
//     output << ((hour == 0 || hour == 12) ? 12: hour % 12 ) << ":" << setfill('0') << setw(2) << minute << ":" << setw(2) << second << (hour < 12 ? " AM" : " PM");
//     return output.str(); // returns the formatted string
// }

// to compile: run g++ -c Time.cpp

#include <iomanip> // for setw and setfill stream manipulators
#include <stdexcept> // for invalid_argument exception class
#include <sstream> // for ostringstream class
#include <string>
#include "Time.h" // include definition of class Time from Time.h
#include <iostream>

using namespace std;

Time::Time(int h, int m, int s)
{
    setHour(h);
    setMinute(m);
    setSecond(s);
}

Time::~Time(){
    std::cout << "Destructor is being called for " << toUniversalString() << std::endl;
}

void Time::setTime(int h, int m, int s){
    // valudate hour, minute and second
    if ((h >= 0 && h < 24) && (m >= 00 && m < 60) && (s >= 0 && s < 60)){
        hour = h;
        minute = m;
        second = s;
    } else {
        throw invalid_argument(
            "hour, minute, and/or second was out of range");
    }
}


//setter functions

void Time::setHour(unsigned int h){
    if (h >= 0 and h< 24){
        hour = h;
    }
    else {
        throw std::invalid_argument("Hour must be between 0 and 23");   
    }
}

void Time::setMinute(unsigned int m){
    if (m >= 0 and m< 60){
        minute = m;
    }
    else {
        throw std::invalid_argument("Minute must be between 0 and 60");   
    }
}

void Time::setSecond(unsigned int s){
    if (s >= 0 and s< 60){
        second = s;
    }
    else {
        throw std::invalid_argument("Second must be between 0 and 60");   
    }
}

// getter functions
// unsigned int Time::getHour() {
//     return hour;
// }

// unsigned int Time::getMinute() {
//     return minute;
// }

// unsigned int Time::getSecond() {
//     return second;
// }

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