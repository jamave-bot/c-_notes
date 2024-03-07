
#include "SavingsAccount.h"

using namespace std;

SavingsAccount::SavingsAccount(double bal, double intRate): Account(bal){
    if (intRate >= 0 && intRate <=1){
        interestRate = intRate;
    }
}

double SavingsAccount::calculateInterest() const{
    return getBalance() * getInterest(); 
}

double SavingsAccount::getInterest() const {
    return interestRate; 
}