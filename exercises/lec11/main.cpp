#include <iostream>
#include <array>

// array must be a reference because we don't want to copy a huge array
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
        recursiveBinarySearch(items, searchKey, low, mid-1); // call the function recursively, setting new points for the low and high
    } else {
        recursiveBinarySearch(items, searchKey, mid+1, high); // call the function recursively, setting new points for the low and high
    }

}; 

int main (){

    return 0;
}