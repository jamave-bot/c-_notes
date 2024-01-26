#include <iostream>
using namespace std;

int Log3(int num){
    int returnNum = 0;

    while (num/3 != 0){
        num = num/3;
        returnNum++;
    }

    return returnNum;
}

int main(){
    cout << Log3(9) << endl; // 2
    cout << Log3(81) << endl; // 4
    return 0;
}
