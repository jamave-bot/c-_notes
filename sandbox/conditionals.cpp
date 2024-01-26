/* 
A car company charges its customers based on the distance they travel. 
If the distance is less than 100 km the cost is 10 dollars , 
if it is between 100 km and 500 km then the cost is 8 dollars per 100 km, 
otherwise the cost is 6 dollars per 100 km. 
Write a program that inputs the distance and calculates the cost. 

Sample output1: 
    Enter distance: 50 
    Cost: 10
Sample output2:
    Enter distance: 350 
    Cost: 28
Sample output3:
    Enter distance: 545 
    Cost: 32.7
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    unsigned int distance;
    float cost;
    cout << "Enter distance: ";
    cin >> distance; 
    
    if (distance < 100){
        cost = 10;
    } else if ((distance >= 100) && (distance <= 500)){
        cost = distance * .08;
    } else {
        cost = distance * .06;
    }
    
    cout << "Cost: " << cost << endl;
    return 0;
}