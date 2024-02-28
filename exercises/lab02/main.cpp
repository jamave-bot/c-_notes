//
//  main.cpp
//  Complex_Numbers
//
//  Created by esma yildirim on 3/16/22.
//

#include <iostream>
#include "Complex.h"
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    Complex x;
    Complex y{4.3, 8.2};
    Complex z{3.3, 1.1};
    
    x = y + z;
    cout << x << endl;
    
    x = y - z;
    cout << x << endl;
    
    cout << "Enter a complex number with the following format: (r, i) :";
    cin >> y;
    
    if(y == z)
        cout << y << "=" << z << endl;
    if(y != z)
        cout << y << "!=" << z << endl;
    
    x = y * z;
    cout << x << endl;
    
    x = y / z;
    cout << x << endl; 

    return 0;
}
