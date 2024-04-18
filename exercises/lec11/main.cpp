#include <iostream>
#include <array>
#include <algorithm>
#include <chrono>

using namespace std;

// linear search for comparison
template <typename T, size_t size>
int recursiveLinearSearch(const array<T, size> &items, T &searchKey, int pos){
    if (pos >= items.size()){ // we've reached the end of the array
        return -1;
    }

    if (items[pos] == searchKey){
        return pos;
    } else {
        return recursiveLinearSearch(items, searchKey, pos+1);
    }
}


// array must be a reference because we don't want to copy a huge array
// Time complexity: O(logn)
template <typename T, size_t size>
int recursiveBinarySearch(const array<T, size> &items, T &searchKey, int low, int high){
    // base cases: 
    // we find it and return the position, 
    // we do not find it and call it again

    if (low > high){ // if the lowest index has somehow iterated to the point where it's higher than the highest 
        return -1;
    }

    int mid = (low + high + 1)/2; // calculates the middle element

    if(items[mid] == searchKey){ // if the middle of the array is the element we're searching for, we return that index
        return mid;
    } else if (searchKey < items[mid]) {
        // time complexity: T(n/2)
        return recursiveBinarySearch(items, searchKey, low, mid-1); // call the function recursively, setting new points for the low and high
    } else {
        // time complexity: T(n/2)
        return recursiveBinarySearch(items, searchKey, mid+1, high); // call the function recursively, setting new points for the low and high
    }

}

int main (){

    array<int, 1000000> myarray;

    for (int i = 0; i < myarray.size(); i++){
        myarray[i] = i + 1;
    }

    // sort is from the algorithm library, takes in 2 iterators, the beginning and ending 
    sort(myarray.begin(), myarray.end());

    // for (int item: myarray){
    //     cout << item << " ";
    // }
    cout << endl;

    int searchKey;
    cout << "Enter searchKey: ";
    cin >> searchKey;

    // while (searchKey != -1){
    auto start = chrono::steady_clock::now();
    
    int pos = recursiveBinarySearch(myarray, searchKey, 0, myarray.size() - 1);

    auto end = chrono::steady_clock::now();
    cout << "Binary Search: Elapsed time in milliseconds : "
    << chrono::duration_cast<chrono::milliseconds>(end - start).count()
    << " ms" << endl;

    start = chrono::steady_clock::now();
    
    pos = recursiveLinearSearch(myarray, searchKey, 0);

    end = chrono::steady_clock::now();
    cout << "Linear Search: Elapsed time in milliseconds : "
    << chrono::duration_cast<chrono::milliseconds>(end - start).count()
    << " ms" << endl;



    return 0;
};