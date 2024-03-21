#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

int main (){

    /*
    
    cout << "Input 2 numbers: "; 
    istream_iterator<double> inputIter{cin}; // initialize istream iterator of doubles and initialize it with cin operator

    double num1, num2;

    num1 = *inputIter; // dereferenes first value in inputIter, sets it to num1
    inputIter++; // moves the pointer to the next address in inputIter 
    num2 = *inputIter; // puts 2nd value in inputIter and puts it in num2

    ostream_iterator<double> outputIter{cout}; // initializes ostream iterator with cout operator

    *outputIter = num1 + num2; // sets first value in iterator as the sum of num1 and num2

    cout << endl;
    */


   // VECTOR MEMORY ALLOCATION TESTS
   /*
    vector<int> v; // initialize a vector v of ints

    cout << "Size: " << v.size() << " Capacity: " << v.capacity() << endl; // 0,0

    v.push_back(45);
    cout << "adding value..." << endl;

    cout << "Size: " << v.size() << " Capacity: " << v.capacity() << endl; // 1,1

    v.push_back(48);
    cout << "adding value..." << endl;

    cout << "Size: " << v.size() << " Capacity: " << v.capacity() << endl; // 2, 2

    v.push_back(50);
    cout << "adding value..." << endl;

    cout << "Size: " << v.size() << " Capacity: " << v.capacity() << endl; // 3, 4

    v.push_back(52);
    cout << "adding value..." << endl;

    cout << "Size: " << v.size() << " Capacity: " << v.capacity() << endl; // 4, 4

    v.push_back(54);
    cout << "adding value..." << endl;

    cout << "Size: " << v.size() << " Capacity: " << v.capacity() << endl; // 5, 8 Capacity is incremented exponentially when we run out of space
   */


    const int SIZE = 6;
    int values[SIZE] = {1,2,3,4,5,6};

    for (unsigned int i = 0 ; i < SIZE; i++){
        cout << values[i];
    }

    cout << endl;

    // doing this with pointers
    // cbegin will return a pointer to the first element in the array
    // cend returns the location right after the last element in the array
    for ( const int * ptr = cbegin(values); ptr != cend(values); ptr++ ){
        cout << *ptr; // dereferences the pointer
    } 

    return 0;
}