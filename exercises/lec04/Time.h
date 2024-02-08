// Time.h
// Time Class Definition
// Member functions are defined in Time.cpp
#include <string>

// prevent multiple inclusions of header
#ifndef TIME_H
#define TIME_H

//Time class definition
class Time {
    public: 
        void setTime(int, int, int); // set hour, minute and second
        std::string toUniversalString() const;
        std::string toStandardString() const;
    private:
        unsigned int hour{0}; // 0 - 23 (24-hour clock format)
        unsigned int minute{0}; // 0 - 59
        unsigned int second{0}; // 0 - 59
};

#endif