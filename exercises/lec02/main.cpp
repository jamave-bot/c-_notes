#include <iostream>
#include "Account.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	
	Account account1{"Jane Doe", 100}; // default constructor function called
	Account account2{"John Smith", 150}; // default constructor function called
	
	cout << "First account owner: " << account1.getName() << endl;
	cout << "Balance: " << account1.getBalance()<< endl;
	cout << "Second account owner: " << account2.getName() << endl; 
	cout << "Balance: " << account2.getBalance() << endl; 
		
	string localName;
	int amount;
	cout << "Please enter first account owner name: ";
	getline(cin, localName);
	account1.setName(localName);
	cout << "Enter deposit amount: "; 
	cin >> amount; 
	account1.deposit(amount);
	cin.ignore(); //IMPORTANT TO IGNORE NEW LINE CHARACTER WITH ENTER KEY
	cout << "Please enter second account owner name: ";
	getline(cin, localName);
	account2.setName(localName);
	cout << "Enter deposit amount: "; 
	cin >> amount; 
	account2.deposit(amount);
	
	cout << "First account owner: " << account1.getName() << endl; 
	cout << "Balance: " << account1.getBalance() << endl; 
	cout << "Second account owner: " << account2.getName() << endl; 
	cout << "Balance: " << account2.getBalance() << endl; 
	return 0;
}
