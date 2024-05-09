// Fig. 19.5: List.h
// List class-template definition.
#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H

#include <iostream>
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
      
   }

   void removeAtPosition(int index, NODETYPE &value)
   {

     
   }

   void insertionSort()
   {
      
   }

   void insertAtSorted(NODETYPE & value)
   {
      
   }

   NODETYPE binarySearch(NODETYPE & keyValue)
   {
      
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
