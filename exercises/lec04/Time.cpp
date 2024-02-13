#include "Time.h"
#include <stdexcept>
#include <sstream>
#include <iomanip>
#include <string>
#include <iostream>

Time::Time(int h, int m, int s)
{
    setTime(h, m, s);
}

Time::~Time()
{
    std::cout << "Destructor is being called for " << toUniversalString() << std::endl;
}

void Time::setHour(int h)
{
    if(h >=0 and h <24)
        hour = h;
    else throw std::invalid_argument("Hour must be between 0 and 23");
}

void Time::setMinute(int m)
{
    if(m >=0 and m <60)
        minute = m;
    else throw std::invalid_argument("Minute must be between 0 and 59");
}

void Time::setSecond(int s)
{
    if(s >=0 and s <60)
        second = s;
    else throw std::invalid_argument("Second must be between 0 and 59");
}
unsigned int Time::getHour() const { return hour;}
unsigned int Time::getMinute() const { return minute;}
unsigned int Time::getSecond() const { return second;}





void Time::setTime(int h, int m, int s){
   setHour(h);
   setMinute(m);
   setSecond(s);
}

std::string Time::toUniversalString() const
{
        std::ostringstream output;
        output << std::setfill('0') << std::setw(2) << hour << ":" << std::setw(2) << minute << ":" << std::setw(2) << second;
        return output.str();
}

  std::string Time::toStandardString() const
  {
       std::ostringstream output;
        output << std::setfill('0') << std::setw(2) << ((hour ==0 or hour == 12)? 12: hour %12)
               << ":" << std::setw(2) << minute << ":"
               << std::setw(2) << second
               << ((hour < 12) ? " AM": " PM") ;
        return output.str();

  }

