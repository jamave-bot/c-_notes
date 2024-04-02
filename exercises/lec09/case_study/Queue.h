#ifndef QUEUE_H
#define QUEUE_H

#include <deque>
#include <iostream>
#include <stdexcept> 

using namespace std;

template <typename QUEUETYPE>
class Queue{
public:
    const QUEUETYPE& front(){
        return this->myQueue.front();
    }

    size_t size(){
        return this->myQueue.size();
    }

    bool empty(){
        return this->myQueue.empty();
    }

    void enqueue(QUEUETYPE & q){
        this->myQueue.push_back(q);
    }

    QUEUETYPE& dequeue(){
        if (this->empty()){
            throw out_of_range("Cannot remove element. The queue is empty");
        } else{
            QUEUETYPE returnEle = this->front(); 
            this->myQueue.pop_front();
            return &returnEle;
        }
    }

    void print(){
        if (this->empty()){
            cout << "Cannot print the queue. It is empty." << endl;
        } else{
            for (QUEUETYPE element: this->myQueue){
                cout << element << " ";
            }
            cout << endl;
        }
    }



private:
    deque<QUEUETYPE> myQueue;
};

#endif