#include "Date.h"
#include <iostream>
#include <stdexcept>

using namespace std;

int main(){

    // if we put these inside a try block, the scope of this would just be in the try block
    try
    {
        /* code */
        Date birthDate{3, 12, 1990};
    }
    catch(invalid_argument & ex)
    {
        cout << ex.what() << '\n';
    }
    
    // cout << birthdate.toString() << endl;// this wouldn't work since it's out of scope

    Date date2{4,2, 2020};
    cout << date2.toString() << endl;
    
    return 0;
}