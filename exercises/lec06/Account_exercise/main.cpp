//
//  main.cpp
//  Account_inheritance
//
//  Created by esma yildirim on 2/28/23.
//

#include <iostream>
#include "Account.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"
using namespace std;

int main(int argc, const char * argv[]) {
    SavingsAccount sAccount{300, 0.05};
    CheckingAccount cAccount{500, 2.35};
    
    cout << "Calculating and adding interest for savings account... " << endl;
    cout << "Before balance: $" << sAccount.getBalance() << endl;
    sAccount.credit(sAccount.calculateInterest());
    cout << "After balance: $" << sAccount.getBalance() << endl;
    
    cout << "Withdrawing $100 from checking account..." << endl;
    cout << "Before balance: $" << cAccount.getBalance() << endl;
    cAccount.debit(100);
    cout << "After balance: $" << cAccount.getBalance() << endl; 
    return 0;
}
