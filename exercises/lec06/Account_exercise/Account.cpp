//
//  Account.cpp
//  Account_inheritance
//
//  Created by esma yildirim on 2/28/23.
//

#include <iostream>
#include "Account.h"
using namespace std;

Account::Account(double balance)
{
    if(balance < 0)
        cout << "Initial balance is invalid." << endl;
    else this->balance = balance;
}

bool Account::credit(double amount)
{
    if(amount >= 0)
    {
        balance += amount;
        return true;
    }else
    {
        cout << "Credit amount is invalid. Balance is unchanged." << endl;
        return false;
    }
}

bool Account::debit(double amount)
{
    if(amount > 0 and amount <= balance)
    {
        balance -= amount;
        return true;
    }else
    {
        cout << "Debit amount is invalid. Balance is unchanged." << endl;
        return false; 
    }
    
}

double Account::getBalance()const { return balance; } 

