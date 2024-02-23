//
//  main.cpp
//  DriverLicenseLab
//
//  Created by esma yildirim on 2/1/23.
//

#include <iostream>
#include "DriverLicense.h"
#include <array>
using namespace std;


void test1()
{
    // insert code here...
    try{
    DriverLicense license{"234054322", "Esma", "Yildirim","20006 45th ave", Date(9,12,2012),Date(9,11,2016),Date(3,23,1944), 5, 5, "B", "BROWN", "F"};
    
    DriverLicense l2{"12345", "John", "Doe", "221 Baker St", Date(9,12,2012),Date(9,11,2016),Date(3,23,1944), 5, 5, "B", "BROWN", "M"};
    }catch(exception &e)
    {
        cout << e.what() << endl;
    }try{
    DriverLicense l3{"12345678e", "John", "Doe", "221 Baker St", Date(9,12,2012),Date(9,11,2016),Date(3,23,1944), 5, 5, "B", "BROWN", "M"};
    }catch(exception &e)
    {
        cout << e.what() << endl;
    }try{
    DriverLicense l4{"123456789", "John", "Doe", "221 Baker St", Date(9,12,2012),Date(9,11,2016),Date(3,23,1944), 5, 5, "B", "BROWN", "M"};
    }catch(exception &e)
    {
        cout << e.what() << endl;
    }
    try{
    DriverLicense l6{"123456789", "John", "Doe", "221 Baker St", Date(9,31,2012),Date(9,11,2016),Date(3,23,1944), 5, 5, "B", "BROWN", "M"};
    }catch(exception &e)
    {
        cout << e.what() << endl;
    }
    try{
    DriverLicense l7{"234054322", "Esma", "Yildirim","20006 45th ave", Date(9,12,2012),Date(9,11,2016),Date(3,23,1944), 5, 5, "T1", "BROWN", "F"};
    }catch(exception &e)
    {
        cout << e.what() << endl;
    }
    try{
        DriverLicense l8{"234054322", "Esma", "Yildirim","20006 45th ave", Date(9,12,2012),Date(9,11,2016),Date(3,23,1944), 5, 5, "B", "BROWN", "C"};
    }catch(exception &e)
    {
        cout << e.what() << endl;
    }

}

int main(int argc, const char * argv[]) {
    test1();
    
    // DriverLicense license1;

    // license1.setID("1111regfd");
    // license1.setHeightFeet(-1);
    // license1.setHeightInches(-4);
    // license1.setLicenseType("zzzzz");
    // license1.setGender("G");

     
    return 0;
}
