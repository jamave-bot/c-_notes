#include <iostream>
#include <array>

using namespace std;

int main(){
    array<int, 10> myintarray; // initialize an array of 10 int elements called myintarray

    // To display the elements in the array
    for (int i = 0; i < myintarray.size(); i++){ //size() function returns the initalized size of the array
        myintarray[i] = i+1; //stores the value of i in the corresponding index - 1
    }

    for (int element: myintarray){ // for every integer element in myintarray
        cout << element << " ";
    }

    cout << endl;

    return 0;
}