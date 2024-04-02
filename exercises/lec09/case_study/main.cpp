#include "Queue.h"
#include <iostream>
#include <cstdlib>

int main(){
    Queue<int> q1;
    Queue<double> q2;

    
    for (int i = 0; i < 20; i++){
        int random = rand()%10;
        q1.enqueue(random);
        q1.print();
    }


    for (int i = 0; i < 20; i++){
        cout << "Removed " << q1.dequeue() << endl;
        q1.print();
    }


    // double
    for (int i = 0; i < 20; i++){
        double random = rand()%10;
        q2.enqueue(random);
        q2.print();
    }


    for (int i = 0; i < 21; i++){
        cout << "Removed " << q2.dequeue() << endl;
        q2.print();
    }



    return 0;
}