#ifndef SAVINGS_H
#define SAVINGS_H

#include "Account.h"

class SavingsAccount : public Account{
public: 
    SavingsAccount(double = 0.0, double = 0.0);
    double calculateInterest() const;
    double getInterest() const;
private:
    double interestRate{0.0};
};

#endif