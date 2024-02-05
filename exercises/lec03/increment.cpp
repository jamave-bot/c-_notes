/*
Write a function increment that takes a pointer numPtr to an integer number 
and increments the value of the number. 
The function does not return anything. 
Test your function by calling it three times and print 
the value of the number after each increment.
 
Sample output:
Enter an integer x: 4
x = 5 after increment
x = 6 after increment 
x = 7 after increment 
*/

void increment(int* numPtr){
    *numPtr = *numPtr + 1;
}
