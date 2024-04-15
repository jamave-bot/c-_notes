// Fig. 19.5: List.h
// List class-template definition.
#ifndef LIST_H
#define LIST_H

#include <iostream>
#include "ListNode.h" // ListNode class definition

template<typename NODETYPE>
class CircularDoublyLinkedList {
public:
   // destructor
   ~CircularDoublyLinkedList() {
      if (!isEmpty()) { // List is not empty
         std::cout << "Destroying nodes ...\n";

         ListNode<NODETYPE>* currentPtr{firstPtr};
         ListNode<NODETYPE>* tempPtr{nullptr};

         while (currentPtr != lastPtr) { // while the current pointner is not the last, this would stop at the 2nd to last pointer in the list
            tempPtr = currentPtr;
            std::cout << tempPtr->data << '\n';
            currentPtr = currentPtr->nextPtr;  
            delete tempPtr;
         } 

         // we know only the last pointer is left, 
         // even if it's the only pointer in the list, this would take care of it
         std::cout << lastPtr->data << "\n";
         delete lastPtr;

      } 

      std::cout << "All nodes destroyed\n\n";
   } 

   // insert node at front of list
   void insertAtFront(const NODETYPE& value) {
      ListNode<NODETYPE>* newPtr{getNewNode(value)}; // new node

      if (isEmpty()) { // List is empty
         firstPtr = lastPtr = newPtr; // new list has only one node
         newPtr->nextPtr = newPtr;
         newPtr->prevPtr = newPtr;
      } 
      else { // List is not empty
         newPtr->nextPtr = firstPtr; // newPtr's next pointer points to the previous first ptr value
         newPtr->prevPtr = lastPtr;

         // change the first ptr and last ptr's data values
         firstPtr->prevPtr = newPtr;
         lastPtr->nextPtr = newPtr; // aim firstPtr at new node

         // initialize the first ptr to the newptr
         firstPtr = newPtr;
      } 
   } 

   // insert node at back of list
   void insertAtBack(const NODETYPE& value) {
      ListNode<NODETYPE>* newPtr{getNewNode(value)}; // new node

      if (isEmpty()) { // List is empty
         firstPtr = lastPtr = newPtr; // new list has only one node
         newPtr->nextPtr = newPtr;
         newPtr->prevPtr = newPtr;
      } 
      else { // List is not empty
         lastPtr->nextPtr = newPtr; // update previous last node next ptr
         firstPtr->prevPtr = newPtr;

         newPtr->prevPtr = lastPtr;
         newPtr->nextPtr = firstPtr;

         lastPtr = newPtr; // new last node
      } 
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
            firstPtr->prevPtr = lastPtr;
            lastPtr->nextPtr = firstPtr; 
         } 

         value = tempPtr->data; // return data being removed
         delete tempPtr; // reclaim previous front node
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
            lastPtr = lastPtr->prevPtr; // remove last node
            lastPtr->nextPtr = firstPtr; // this is now the last node
            firstPtr->prevPtr = lastPtr;
         } 

         value = tempPtr->data; // return value from old last node
         delete tempPtr; // reclaim former last node
         return true; // delete successful
      } 
   } 

   // is List empty?

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

      while (currentPtr != lastPtr) { // get element data
         std::cout << currentPtr->data << ' ';
         currentPtr = currentPtr->nextPtr;
      } 

      std::cout << lastPtr->data << " ";
      std::cout << "\n\n";
   } 

private:
   ListNode<NODETYPE>* firstPtr{nullptr}; // pointer to first node
   ListNode<NODETYPE>* lastPtr{nullptr}; // pointer to last node  

   // utility function to allocate new node
   ListNode<NODETYPE>* getNewNode(const NODETYPE& value) {
      return new ListNode<NODETYPE>{value};
   } 
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
