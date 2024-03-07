//
//  Account.h
//  Account_inheritance
//
//  Created by esma yildirim on 2/28/23.
//

#ifndef Account_h
#define Account_h
class Account{
public:
    Account(double = 0.0);
    bool credit(double amount);
    bool debit(double amount);
    double getBalance()const;
private:
    double balance;
};

#endif /* Account_h */
