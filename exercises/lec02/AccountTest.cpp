#include <iostream>
#include "Account.h"
#include "utility_functions.cpp"
#include <array>

using namespace std;

int main(){

    Account account1{"Jane Green", 50};
    Account account2{"John Blue", -7};

    Account accounts[2] = {account1, account2};

    cout << "account1: " << account1.getName() << "balance is: " << account1.getBalance();
    cout << "\naccount2: " << account2.getName() << "balance is: " << account2.getBalance();

    cout << "\nEnter deposit amount for account1: ";
    int depositAmount;
    cin >> depositAmount;
    cout << "Adding...";
    account1.deposit(depositAmount);

    cout << "\n\naccount1: " << account1.getName() << "balance is: " << account1.getBalance();;
    cout << "\naccount2: " << account2.getName() << "balance is: " << account2.getBalance();

    return 0;
}