#include <iostream>
#include "Account.h"
#include "utility_functions.cpp"
#include <array>

using namespace std;
int main(){

    Account account1{"Jane Green", 50};
    Account account2{"John Blue", -7};

    array<Account, 2> accounts;// to have an array of objects we must have a default constructor back in Accounts.h 
    accounts[0] = account1;
    accounts[1] = account2;

    // Display account info
    cout << "Account1: " << account1.getName() << endl;
    cout << "Balance is: " << account1.getBalance() << endl;
    cout << "Account2: " << account2.getName() << endl;
    cout << "Balance is: " << account2.getBalance() << endl << endl;


    // changing values
    // string localName;
    // int amount;

    // cout << "Please enter first account owner name: ";
    // getline(cin,localName);
    // account1.setName(localName);
    // cout << "Enter Deposit amount: ";
    // cin >> amount;
    // account1.deposit(amount);

    // cin.ignore(); // IMPORTANT we must ignore after newline with enter key

    // cout << "Please enter second account owner name: ";
    // getline(cin,localName);
    // account2.setName(localName);
    // cout << "Enter Deposit amount: ";
    // cin >> amount;
    // account2.deposit(amount);

    // Display account info
    // cout << "Account1: " << account1.getName() << endl;
    // cout << "Balance is: " << account1.getBalance() << endl;;
    // cout << "Account2: " << account2.getName() << endl;
    // cout << "Balance is: " << account2.getBalance() << endl;;

    // Withdrawal
    // cout << "\nEnter withdraw amount for account1: ";
    // int withdrawAmount;
    // cin >> withdrawAmount;
    // cout << "Withdrawing...\n";
    // account1.withdraw(withdrawAmount);

    // Display account info
    // cout << "Account1: " << account1.getName() << endl;
    // cout << "Balance is: " << account1.getBalance() << endl;;
    // cout << "Account2: " << account2.getName() << endl;
    // cout << "Balance is: " << account2.getBalance() << endl;;

    // Search and deposit test
    cout << "\nSearching for 'John Blue'...\n";
    searchAndDeposit(accounts,"John Blue", 100);
    // cout << (accounts[1].getName() == "John Blue") << ": 1 for match, 0 for false";
    cout << "Account1: " << account1.getName() << endl;
    cout << "Balance is: " << account1.getBalance() << endl;;
    cout << "Account2: " << account2.getName() << endl;
    cout << "Balance is: " << accounts[1].getBalance() << endl;;


    return 0;
}