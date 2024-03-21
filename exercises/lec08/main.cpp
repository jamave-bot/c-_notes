#include <iostream>
#include <iterator>
#include <vector>
#include <cstdlib> // needed for random fn
#include <algorithm> // needed for copy fn

using namespace std;


// function declarations
template <typename T>
void print(vector<T>  v);

template <typename T>
void printReverse(vector<T> v);

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


    /*
    // ITERATOR TESTING
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
    */

    vector<int> myvector; // empty vector
    for(int i = 0; i < 10; i++){
        myvector.push_back(rand()%100);
    }

    print(myvector);

    vector<int> myvector5{90, 91, 92, 93, 95, 95, 96, 97, 98, 99};

    myvector.insert(myvector.cbegin() + (myvector.size()/2), myvector5.cbegin(), myvector5.cend());
    print(myvector);

    myvector.erase(myvector.cend() - 10, myvector.cend());
    print(myvector);

    myvector.insert(myvector.cbegin(), myvector5.cbegin(), myvector5.cbegin() + 2);
    print(myvector);

    myvector.push_back(78);
    myvector.push_back(17);

    cout << endl;
    cout << "vector 1: \n";
    print(myvector);

    vector<int> myvector6{1, 2, 3, 4, 5, 6, 77, 8, 90, 17};

    cout << "vector 2: \n";
    print(myvector6);

    vector<int> counterVector;
    int counter = 0;
    for (auto iterator = myvector.cbegin(); iterator != myvector.cend(); iterator++ ){
        int val = *iterator;
        auto found = find(myvector6.begin(), myvector6.end(), val);
        if (found != myvector6.end()){
            if (find(counterVector.begin(), counterVector.end(), val) == counterVector.end() ) // if the element is not already in counter vector
            counterVector.push_back(val);
        }
    }
    print(counterVector);
    cout << "number of same elements: " << counterVector.size() << endl;


    // vector<int> myvector2{23,54, 12, 87, 11}; //initializes the vector
    // vector<int> myvector3{myvector2.cbegin(), myvector2.cend()}; // another way to initialize the vector, copies vector2 using its iterator addresses (begin, end) 
    // vector<int> myvector4{90, 91, 92, 93};

    // inserting myvector4's values into myvector3

    // myvector3.insert(myvector3.cbegin(), myvector4.cbegin(), myvector4.cend());



    // myvector3.insert(myvector3.cbegin()+3, 11); //inserts at a given iterator address, then the value

    // erasing the first 3 elements
    // myvector3.erase(myvector3.cbegin(), myvector3.cbegin+3); // either erases the element at the address, or goes to the 2nd parameter's address

    // print(myvector2);
    // print(myvector3);


    // ostream_iterator<int> output{cout, " "}; // output is an ostream iterator that goes to cout and adds a " "
    // copy(myvector3.cbegin(), myvector3.cend(), output);

    // try{
    //     cout << myvector3.at(6) << endl; // using at(6) instead of [6] will throw an exception message
    // }
    // catch(out_of_range &exp) {
    //     cout << exp.what() << endl
    // }



    /* 

    print(myvector);
    printReverse(myvector);

    vector<char> cvector;
    for(int i = 0; i < 10; i++){
        cvector.push_back(rand()%26+97);
    }

    print(cvector);
    */

    return 0;
};

// Template functions must have 'template <typename T>' before declarations
// this takes in a vector of any type

template <typename T>
void print(vector<T> myvector){
    
    // auto iterator = myvector.cbegin() -> 'auto' keyword changes the type of iterator object
    for (auto iterator = myvector.cbegin(); iterator != myvector.cend(); iterator++ ){
        cout << *iterator << " " ;
    }

    cout << endl;
};

template <typename T>
void printReverse(vector<T> myvector){
    
    // auto iterator = myvector.end() -> 'auto' keyword changes the type of iterator object, points to the pointer to the end
    for (auto iterator = myvector.crbegin(); iterator != myvector.crend(); iterator++ ){
        cout << *iterator << " " ;
    }

    cout << endl;
};
