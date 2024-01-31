#include "Account.h"

template <typename T, size_t size>
int searchAndDeposit(array<T,size>& accounts, string name, int amount){

    for (int i = 0; i < size; i++){
        currentAccount = accounts[i];
        string accountName = currentAccount.getName();
        if (accountName == name){
            currentAccount.deposit(amount);
            return 1
        }
    }

    return -1;
};

template <typename T, size_t size>
int searchAndWithdraw(array<T,size>& accounts, string name, int amount){

    for (int i = 0; i < size; i++){
        currentAccount = accounts[i];
        string accountName = currentAccount.getName();
        if (accountName == name){
            currentAccount.withdraw(amount);
            return 1
        }
    }

    return -1;
};
