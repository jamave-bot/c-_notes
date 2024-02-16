#include "Time.h"
#include <iostream>
#include <stdexcept>
using namespace std;

int main()
{

   Time time1{23,45,12};
   Time time2{2, 10};
   Time time3{4};
   Time time4;

   Time & timeRef = time2;
   Time * timePtr = &time1;
/*
   try{
         time1.setTime(23, 45, 12);
         time2.setTime(2, 10, 8);
         time3.setTime(45, 45, 45);

   }catch(invalid_argument & expObject)
   {
        cout << expObject.what() << endl;
   }
*/
   cout << "Time1: " << timePtr->toUniversalString() << "   " << timePtr->toStandardString() << endl;
   cout << "Time2: " <<timeRef.toUniversalString() << "   " << timeRef.toStandardString() << endl;
   cout << "Time3: " <<time3.toUniversalString() << "   " << time3.toStandardString() << endl;
   cout << "Time4: " <<time4.toUniversalString() << "   " << time4.toStandardString() << endl;

}