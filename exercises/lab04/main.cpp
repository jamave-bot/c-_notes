#include <iostream>
#include <cstdlib>
#include <vector>
#include <list>
#include <deque>
#include <chrono>

using namespace std;

// WriteToEnd prototypes
template <typename T> void sequentialWriteToEnd(vector<T> &); // 560ms
template <typename T> void sequentialWriteToEnd(list<T> &); // 1389 ms
template <typename T> void sequentialWriteToEnd(deque<T> &); //579

// WriteToFront prototypes
template <typename T> void sequentialWriteToFront(vector<T> &);
template <typename T> void sequentialWriteToFront(list<T> &);
template <typename T> void sequentialWriteToFront(deque<T> &);

// Read prototypes
template <typename T> void sequentialRead(vector<T> &);
template <typename T> void sequentialRead(list<T> &);
template <typename T> void sequentialRead(deque<T> &);

// Random Write prototypes
template <typename T> void randomWrite(vector<T> &);
template <typename T> void randomWrite(list<T> &);
template <typename T> void randomWrite(deque<T> &);

// Random Read prototypes
template <typename T> void randomRead(vector<T> &);
template <typename T> void randomRead(list<T> &);
template <typename T> void randomRead(deque<T> &);



int main(){
    /* my main
    srand(0);
    
    vector<int> myvector;
    list<int> mylist;
    deque<int> mydeque;

    // Write to End
    // cout << "Write to End:" << endl;
    // sequentialWriteToEnd(myvector);  // 560ms
    // sequentialWriteToEnd(mylist);    // 1389 ms
    // sequentialWriteToEnd(mydeque);   // 579 ms
    // cout << endl;
    
    // Write to Front
    cout << "Write to Front:" << endl;
    sequentialWriteToFront(myvector);   // 506 ms
    sequentialWriteToFront(mylist);     // 13 ms
    sequentialWriteToFront(mydeque);    // 5 ms
    cout << endl;

    // Read
    cout << "sequential read:" << endl;
    sequentialRead(myvector);           // 0 ms
    sequentialRead(mylist);             // 1 ms
    sequentialRead(mydeque);            // 6 ms
    cout << endl;

    // Random Write
    // cout << "Random Write:" << endl;
    // randomWrite(myvector);           // 0 ms
    // randomWrite(mylist);           // 0 ms
    // randomWrite(mydeque);           // 0 ms
    // cout << endl;
    */


    srand(0);
    vector<long> myVector;
    list<long> myList;
    deque<long> myDeque;
    
    //sequential write to the end
    cout << "Sequential write to the end "<< endl;
    sequentialWriteToEnd(myVector);
    sequentialWriteToEnd(myList);
    sequentialWriteToEnd(myDeque);
    myVector.clear();
    myList.clear();
    myList.clear();
    //sequential write to the front
    cout << "Sequential write to the front "<< endl;
    sequentialWriteToFront(myVector);
    sequentialWriteToFront(myList);
    sequentialWriteToFront(myDeque);

    cout << "Sequential read "<< endl;

    //sequential read
    sequentialRead(myVector);
    sequentialRead(myList);
    sequentialRead(myDeque);

    //random write
    cout << "random write"<< endl;
    randomWrite(myVector);
    randomWrite(myList);
    randomWrite(myDeque);
    
    //random read
    cout << "random read"<< endl;
    randomRead(myVector);
    randomRead(myList);
    randomRead(myDeque);


    return 0;
};

template <typename T> 
void sequentialWriteToEnd(vector<T> & v)
{
    auto start = chrono::steady_clock::now();
    
    //insert 1 million elements 
    for (int i= 0; i < 1000000; i++){
        v.push_back(rand()%10);
    }

    auto end = chrono::steady_clock::now();
    cout << "Vector: Elapsed time in milliseconds : "
    << chrono::duration_cast<chrono::milliseconds>(end - start).count()
    << " ms" << endl;
};

template <typename T> 
void sequentialWriteToEnd(list<T> & l)
{
    auto start = chrono::steady_clock::now();
    
    //insert 1 million elements 
    for (int i= 0; i < 1000000; i++){
        l.push_back(rand()%10);
    }

    auto end = chrono::steady_clock::now();
    cout << "List: Elapsed time in milliseconds : "
    << chrono::duration_cast<chrono::milliseconds>(end - start).count()
    << " ms" << endl;
};

template <typename T> 
void sequentialWriteToEnd(deque<T> & d)
{
    auto start = chrono::steady_clock::now();
    
    //insert 1 million elements 
    for (int i= 0; i < 1000000; i++){
        d.push_back(rand()%10);
    }

    auto end = chrono::steady_clock::now();
    cout << "Deque: Elapsed time in milliseconds : "
    << chrono::duration_cast<chrono::milliseconds>(end - start).count()
    << " ms" << endl;
};

template <typename T> void sequentialWriteToFront(vector<T> & v){
    auto start = chrono::steady_clock::now();
    
    //insert 100,000 elements 
    for (int i= 0; i < 100000; i++){
        v.insert(v.cbegin(), rand()%10);
    }

    auto end = chrono::steady_clock::now();
    cout << "Vector: Elapsed time in milliseconds : "
    << chrono::duration_cast<chrono::milliseconds>(end - start).count()
    << " ms" << endl;
};

template <typename T> void sequentialWriteToFront(list<T> & l){
    auto start = chrono::steady_clock::now();
    
    //insert 100,000 elements 
    for (int i= 0; i < 100000; i++){
        l.push_front(rand()%10);
    }

    auto end = chrono::steady_clock::now();
    cout << "List: Elapsed time in milliseconds : "
    << chrono::duration_cast<chrono::milliseconds>(end - start).count()
    << " ms" << endl;
};

template <typename T> void sequentialWriteToFront(deque<T> & d){
    auto start = chrono::steady_clock::now();
    
    //insert 100,000 elements 
    for (int i= 0; i < 100000; i++){
        d.push_front(rand()%10);
    }

    auto end = chrono::steady_clock::now();
    cout << "Deque: Elapsed time in milliseconds : "
    << chrono::duration_cast<chrono::milliseconds>(end - start).count()
    << " ms" << endl;
};


template <typename T> void sequentialRead(vector<T> & v){
    auto start = chrono::steady_clock::now();
    
    //insert 100,000 elements 
    for (int i= 0; i < v.size(); i++){
        v[i] += 1;
    }

    auto end = chrono::steady_clock::now();
    cout << "Vector: Elapsed time in milliseconds : "
    << chrono::duration_cast<chrono::milliseconds>(end - start).count()
    << " ms" << endl;
};

template <typename T> void sequentialRead(list<T> & l){
    auto start = chrono::steady_clock::now();
    
    //insert 100,000 elements 
    for (auto it = l.begin(); it != l.end(); it++){
        *it = *it + 1;
    }

    auto end = chrono::steady_clock::now();
    cout << "List: Elapsed time in milliseconds : "
    << chrono::duration_cast<chrono::milliseconds>(end - start).count()
    << " ms" << endl;
}

template <typename T> void sequentialRead(deque<T> & d){
    auto start = chrono::steady_clock::now();
    
    //insert 100,000 elements 
    for (int i= 0; i < d.size(); i++){
        d[i] += 1;
    }

    auto end = chrono::steady_clock::now();
    cout << "Deque: Elapsed time in milliseconds : "
    << chrono::duration_cast<chrono::milliseconds>(end - start).count()
    << " ms" << endl;
} 

template <typename T> void randomWrite(vector<T> & v){
    auto start = chrono::steady_clock::now();
    
    //insert 
    for (int i= 0; i < 100000; i++){
        long index = rand()%100000;
        v.insert(v.begin() + index, 9);
    }

    auto end = chrono::steady_clock::now();
    cout << "Vector: Elapsed time in milliseconds : "
    << chrono::duration_cast<chrono::milliseconds>(end - start).count()
    << " ms" << endl;
}

template <typename T> void randomWrite(list<T> & l){
    auto start = chrono::steady_clock::now();
    
    //insert 
    for (int i= 0; i < 100000; i++){
        auto it = l.begin();
        long index = rand()%100000;
        advance(it, index);
        l.insert(it, 9);
    }

    auto end = chrono::steady_clock::now();
    cout << "List: Elapsed time in milliseconds : "
    << chrono::duration_cast<chrono::milliseconds>(end - start).count()
    << " ms" << endl;
}

template <typename T> void randomWrite(deque<T> & d){
    auto start = chrono::steady_clock::now();
    
    //insert 
    for (int i= 0; i < 100000; i++){
        long index = rand()%100000;
        d.insert(d.begin() + index, 9);
    }

    auto end = chrono::steady_clock::now();
    cout << "Deque: Elapsed time in milliseconds : "
    << chrono::duration_cast<chrono::milliseconds>(end - start).count()
    << " ms" << endl;
}

template <typename T> void randomRead(vector<T> &v){
    auto start = chrono::steady_clock::now();
    
    //insert 
    for (int i= 0; i < 100000; i++){
        long index = rand()%100000;
        v[index] = v[index] + 1;
    }

    auto end = chrono::steady_clock::now();
    cout << "Vector: Elapsed time in milliseconds : "
    << chrono::duration_cast<chrono::milliseconds>(end - start).count()
    << " ms" << endl;
}

template <typename T> void randomRead(list<T> &l){
    auto start = chrono::steady_clock::now();
    
    //insert 
    for (int i= 0; i < 100000; i++){
        auto it = l.begin();
        long index = rand()%100000;
        advance(it, index);
        *it = *it + 1;

    }

    auto end = chrono::steady_clock::now();
    cout << "List: Elapsed time in milliseconds : "
    << chrono::duration_cast<chrono::milliseconds>(end - start).count()
    << " ms" << endl;
}

template <typename T> void randomRead(deque<T> &d){
    auto start = chrono::steady_clock::now();
    
    //insert 
    for (int i= 0; i < 100000; i++){
        long index = rand()%100000;
        d[index] = d[index] + 1;
    }

    auto end = chrono::steady_clock::now();
    cout << "Deque: Elapsed time in milliseconds : "
    << chrono::duration_cast<chrono::milliseconds>(end - start).count()
    << " ms" << endl;
}
