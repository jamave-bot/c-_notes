#include <iostream>
#include <string>
#include <iomanip> 
using namespace std;

int main(){
    float a,b,c,d;

    cout << "Enter a: ";
    cin >> a;

    cout << "Enter b: ";
    cin >> b;

    cout << "Enter c: ";
    cin >> c;

    d = ( ( ((5*a)-(3*b)) / (c*c) ) + ( (c+b) / (c-b)) );
    cout << "d is "<< fixed << setprecision(5) << d << "." << endl;

    return 0;
}