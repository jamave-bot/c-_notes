/*
    . CheckingAccount should override credit and debit functions so that the fee is 
    subtracted from whenever a transaction is performed successfully.
    Use main.cpp to check your classes.
*/


#include "CheckingAccount.h"

using namespace std;

CheckingAccount::CheckingAccount(double bal, double f): Account (bal){
    fee = f;
}

double CheckingAccount::getFee(){
    return fee; 
}

bool CheckingAccount::credit(double amount)
{
    if (Account::credit(amount - getFee())){
        return true;
    }
    return false;
}


bool CheckingAccount::debit(double amount)
{
    if (Account::debit(amount + getFee())){
        return true;
    }

    return false;
    
}