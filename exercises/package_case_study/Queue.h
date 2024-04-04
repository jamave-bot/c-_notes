#ifndef QUEUE_H
#define QUEUE_H
#include <deque>
#include <stdexcept>
#include <iostream>
using namespace std; 
template <typename QUEUETYPE>
class Queue{
public:
	const QUEUETYPE & front()
	{
		return myQueue.front();
	}

    size_t size()
    {
    	return myQueue.size();
    }
    
    bool empty()
    {
    	return myQueue.empty();
    }
    void enqueue(QUEUETYPE & element)
    {
    	myQueue.push_back(element);
    }
    
    void print()
    {
    	for(QUEUETYPE element: myQueue)
    	     cout << element << " ";
    	cout << endl; 
    }

    QUEUETYPE dequeue()
    {
    	QUEUETYPE temp;
    	if(myQueue.empty())
    	  throw out_of_range("Queue is empty.");
    	temp = myQueue.front();
    	myQueue.pop_front();
    	return temp; 
    	
    }
private: 
   deque<QUEUETYPE> myQueue;
};



#endif
