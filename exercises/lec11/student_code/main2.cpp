// Fig. 19.3: fig19_03.cpp
// Manipulating a linked list.
#include <iostream>
#include <string>
#include "DoublyLinkedList.h" // List class definition
using namespace std;

// display program instructions to user
void instructions() {
   cout << "Enter one of the following:\n"
      << "  1 to insert at position\n"
      << "  2 to delete at position\n"
      << "  3 to end list processing\n";
}


// function to test a List
template<typename T>
void testList(DoublyLinkedList<T>& listObject, const string& typeName) {
   cout << "Testing a List of " << typeName << " values\n";
   instructions(); // display instructions

   int choice; // store user choice
   T value; // store input value
   int index;
   do { // perform user-selected actions
      cout << "? ";
      cin >> choice;
      try{
      switch (choice) {
      case 1: // insert at beginning
         cout << "Enter " << typeName << ": ";
         cin >> value;
         cout << "Enter index: ";
         cin>> index;
         listObject.insertAtPosition(index, value);
         listObject.print();
         break;
      case 2: // insert at end
         cout << "Enter index: ";
         cin>> index;
         listObject.removeAtPosition(index, value);
         listObject.print();
         break;

      }
      }catch(std::out_of_range &e)
      {
          cout << e.what() << endl;
      }
   } while (choice < 3);

   cout << "End list test\n\n";
}

int main() {
   // test List of int values
   DoublyLinkedList<int> integerList;
   testList(integerList, "integer");
   integerList.insertionSort();
   integerList.print();

   int value;
   cout << "Enter value to insert: ";
   cin >> value;
   integerList.insertAtSorted(value);
   cout << "Enter value to insert: ";
   cin >> value;
   integerList.insertAtSorted(value);
   cout << "Enter value to insert: ";
   cin >> value;
   integerList.insertAtSorted(value);
   integerList.print();

   cout << "Enter value to search: ";
   cin >> value;
   int result = integerList.binarySearch(value);
   if(result != -1)
      cout << "Found " << result << endl;
   else
      cout << "Could not find it" << endl;
   // test List of double values
   //List<double> doubleList;
   //testList(doubleList, "double");



}

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
