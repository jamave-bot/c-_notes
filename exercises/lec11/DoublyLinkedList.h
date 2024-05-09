// Fig. 19.5: List.h
// List class-template definition.
#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H

#include <iostream>
#include <stdexcept>
#include "ListNode.h" // ListNode class definition

template<typename NODETYPE>
class DoublyLinkedList {
public:
   // destructor
   ~DoublyLinkedList() {
      if (!isEmpty()) { // List is not empty
         std::cout << "Destroying nodes ...\n";

         ListNode<NODETYPE>* currentPtr{firstPtr};
         ListNode<NODETYPE>* tempPtr{nullptr};

         while (currentPtr != nullptr) { // delete remaining nodes
            tempPtr = currentPtr;
            //std::cout << tempPtr->data << '\n';
            currentPtr = currentPtr->nextPtr;
            delete tempPtr;
         }
         size = 0;
      }

      std::cout << "All nodes destroyed\n\n";
   }

   // insert node at front of list
   void insertAtFront(const NODETYPE& value) {
       ListNode<NODETYPE>* newPtr = new ListNode<NODETYPE>{value}; // new node

      if (isEmpty()) { // List is empty
         firstPtr = lastPtr = newPtr; // new list has only one node
      }
      else { // List is not empty
         newPtr->nextPtr = firstPtr; // point new node to old 1st node
         firstPtr->prevPtr = newPtr; //NEW LINE
         firstPtr = newPtr; // aim firstPtr at new node
      }
      size++;
   }

   // insert node at back of list
   void insertAtBack(const NODETYPE& value) {
       ListNode<NODETYPE>* newPtr = new ListNode<NODETYPE>{value}; // new node

      if (isEmpty()) { // List is empty
         firstPtr = lastPtr = newPtr; // new list has only one node
      }
      else { // List is not empty
         lastPtr->nextPtr = newPtr; // update previous last node
         newPtr->prevPtr = lastPtr; //NEW LINE
         lastPtr = newPtr; // new last node
      }
      size++;
   }

   // delete node from front of list
   bool removeFromFront(NODETYPE& value) {
      if (isEmpty()) { // List is empty
         return false; // delete unsuccessful
      }
      else {
         ListNode<NODETYPE>* tempPtr{firstPtr}; // hold item to delete

         if (firstPtr == lastPtr) {
            firstPtr = lastPtr = nullptr; // no nodes remain after removal
         }
         else {
            firstPtr = firstPtr->nextPtr; // point to previous 2nd node
            firstPtr->prevPtr = nullptr; //NEW LINE
         }

         value = tempPtr->data; // return data being removed
         delete tempPtr; // reclaim previous front node
         size--;
         return true; // delete successful
      }
   }

   // delete node from back of list

   bool removeFromBack(NODETYPE& value) {
      if (isEmpty()) { // List is empty
         return false; // delete unsuccessful
      }
      else {
         ListNode<NODETYPE>* tempPtr{lastPtr}; // hold item to delete

         if (firstPtr == lastPtr) { // List has one element
            firstPtr = lastPtr = nullptr; // no nodes remain after removal
         }
         else {
            //ListNode<NODETYPE>* currentPtr{firstPtr};

            // locate second-to-last element
            //while (currentPtr->nextPtr != lastPtr) {
            //   currentPtr = currentPtr->nextPtr; // move to next node
            //}

            lastPtr = lastPtr->prevPtr; // remove last node
            //currentPtr->nextPtr = nullptr; // this is now the last node
            lastPtr->nextPtr = nullptr;
         }

         value = tempPtr->data; // return value from old last node
         delete tempPtr; // reclaim former last node
         size--;
         return true; // delete successful
      }
   }
   // inserting at a specific position
  void insertAtPosition(int index, NODETYPE &value)
   {
   	if(index < 0) throw std::out_of_range("index position does not exist");
		if(index >= size) insertAtBack(value);
   	else{
   	   if(index == 0) insertAtFront(value);
   	   else{
   	      ListNode<NODETYPE> *currentPtr = nullptr; // set a current pointer 
		 	
            if(index < size/2) // if we want to insert before the midpoint
               {
                  currentPtr = firstPtr;   // we make the current pointer  go to the index from the front
                  for(int i = 0; i < index; i++)
                     currentPtr = currentPtr->nextPtr;
               }
            else{ // otherwise we go from the back 
               currentPtr = lastPtr;
               for(int i = 0; i < size-index-1; i++)
                     currentPtr = currentPtr->prevPtr; 
		 	   }
		 	   
		 	   ListNode<NODETYPE>* newPtr = new ListNode<NODETYPE>{value}; // new node
		 	   
            // now our current pointer is in the position where we want to insert our new value

            newPtr->nextPtr = currentPtr; // our new pointer's next point to the pointer we got from looping
		 	   newPtr->prevPtr = currentPtr->prevPtr;
		 	   currentPtr->prevPtr->nextPtr = newPtr;
		 	   currentPtr->prevPtr = newPtr; 
		 	   size++;
		    }
		 } 
   	    
      
   }

   void removeAtPosition(int index, NODETYPE &value)
   {
   	 
      if(isEmpty() || index < 0 || index >=size) {
	      throw std::out_of_range("index position does not exist");
      }
	  
      if(index == 0) removeFromFront(value);
      else if (index == size - 1) removeFromBack(value);
      else{
         ListNode<NODETYPE> *currentPtr = nullptr; 
         ListNode<NODETYPE> *tempPtr = nullptr;
         if(index < size/2) {
            currentPtr = firstPtr; 
            for(int i = 0; i < index; i++)
                  currentPtr = currentPtr->nextPtr;
         }
         else{
            currentPtr = lastPtr;
            for(int i = 0; i < size-index-1; i++)
                  currentPtr = currentPtr->prevPtr; 
         }
      
         tempPtr = currentPtr; 
         value = tempPtr->getData();
         
         currentPtr->prevPtr->nextPtr = currentPtr->nextPtr;
         currentPtr->nextPtr->prevPtr = currentPtr->prevPtr;
         size--;
         delete tempPtr;
      }
     
   }

   void insertionSort() // we don't mess with the pointers, only the values
   {
      ListNode<NODETYPE> *next = firstPtr->nextPtr; // we start at the 2nd element
      while(next != nullptr)  // as long as the 2nd/next element isn't null
      {
      	NODETYPE insert = next->getData(); //save the element value pointed by next
      	ListNode<NODETYPE> *moveIndex = next; // move index is the next
      	
         // while the index we're looking at isn't the first and the data 
         // before it is greater than the value we want to insert
      	while(moveIndex != firstPtr && moveIndex->prevPtr->getData() > insert) 
      	{
            // we move the previous data forward and move the index back 
      		moveIndex->data = moveIndex->prevPtr->data;
      		moveIndex = moveIndex->prevPtr; 
      		
      	}    
         // once we get to the condition that moveIndex->prevPtr->getData() < insert, then we can insert the 
      	moveIndex->data = insert; 
      	
         // move to the next pointer in the list
      	next = next->nextPtr; 
      }
      
      
   }

   // assuming the list is sorted already
   void insertAtSorted(NODETYPE & value)
   {
      if(isEmpty()) insertAtBack(value);
      else{
      	
      	ListNode<NODETYPE>* newPtr = new ListNode<NODETYPE>{value};
      	ListNode<NODETYPE> *currentPtr = firstPtr; 
      	while(currentPtr !=nullptr and currentPtr->getData() < newPtr->getData())
      	   currentPtr = currentPtr->nextPtr; 
      	if(currentPtr == nullptr) insertAtBack(value);
      	else if(currentPtr == firstPtr) insertAtFront(value); 
      	else
      	{
      		currentPtr->prevPtr->nextPtr = newPtr;
      		newPtr->prevPtr = currentPtr->prevPtr;
      		newPtr->nextPtr = currentPtr; 
      		currentPtr->prevPtr = newPtr; 
      		size++;
      	}
      	
      }
      
      
      
   }

   NODETYPE binarySearch(NODETYPE & keyValue)
   {
      int low = 0; 
      int high = size - 1;
      ListNode<NODETYPE> * lowPtr = firstPtr;
      ListNode<NODETYPE> * highPtr = lastPtr;
      ListNode<NODETYPE> * midPtr;  
      
      int middle = (low + high +1)/2; 
     
      ListNode<NODETYPE> *foundPtr = nullptr; 
      do{
      	midPtr = lowPtr;
      	for(int i=0; i < middle-low ; i++)
        midPtr = midPtr->nextPtr; 
      	if(keyValue ==  midPtr->getData())
      	    foundPtr = midPtr; 
      	else if (keyValue < midPtr->getData())
      	{
      		high = middle - 1; 
      		highPtr = midPtr->prevPtr; 
      	}
      	else
      	{
      		low = middle + 1;
      		lowPtr = midPtr->nextPtr; 
      	}
      	middle = (low + high +1)/2; 
      	
        
      }while(low <= high && foundPtr == nullptr);
      
      if(foundPtr != nullptr)
         return foundPtr->getData();
      else 
         return -1; 
   }


   bool isEmpty() const {
      return firstPtr == nullptr;
   }

   // display contents of List
   void print() const {
      if (isEmpty()) { // List is empty
         std::cout << "The list is empty\n\n";
         return;
      }

      ListNode<NODETYPE>* currentPtr{firstPtr};

      std::cout << "The list is: ";

      while (currentPtr != nullptr) { // get element data
         std::cout << currentPtr->data << ' ';
         currentPtr = currentPtr->nextPtr;
      }

      std::cout << "\n\n";
   }

private:
   ListNode<NODETYPE>* firstPtr{nullptr}; // pointer to first node
   ListNode<NODETYPE>* lastPtr{nullptr}; // pointer to last node
   int size{0};
   // utility function to allocate new node
   
};

#endif

/**************************************************************************
 * (C) Copyright 1992-2017 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 **************************************************************************/
