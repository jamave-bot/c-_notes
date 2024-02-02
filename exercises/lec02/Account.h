// Account.h

#ifndef ACCOUNT_H //if this is not defined, we define it here, this prevents error of multiple includes of this file in other files
#define ACCOUNT_H 

#include <string>
#include <iostream>

class Account{
public:
    Account(){}

    explicit Account(std::string accountName):name(accountName){} //if only 1 argument we can put the word 'explicit' before the function name

    Account(std::string accountName, int initialBalance) 
        :name(accountName){

        if (initialBalance > 0){
            balance = initialBalance;
        }
    }

    void deposit(int depositAmount){
        if (depositAmount > 0){
            balance = balance + depositAmount;
        }
    }

    int getBalance() const{
        return balance;
    }

    void setName(std::string accountName){
        name = accountName;
    }

    std::string getName() const{ // const keyword after to ensure no data is being changed
        return name;
    }

    void withdraw(int withdrawAmount){
        if (withdrawAmount <= balance){
            balance = balance - withdrawAmount;
        } else{
            std::cout << "Withdrawal amount exceeded account balance";
        }
    }

private:
    std::string name; // default constructor called here 
    int balance{0};
};

#endif //ends the define