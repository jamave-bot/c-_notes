#ifndef CHECKING_H
#define CHECKING_H

#include "Account.h"

class CheckingAccount : public Account{
public: 
    CheckingAccount(double = 0.0, double = 0.0);
    double getFee();
    bool credit(double amount);
    bool debit(double amount);
private:
    double fee{0.0};
};

#endif