#include "Account.h"
#include <array>

using namespace std;

template <typename T, size_t size>
int searchAndDeposit(array<T,size> & accounts, string name, int amount){
    for (int i = 0; i < accounts.size(); i++){
        if (accounts[i].getName() == name){
            cout << "Depositing $" << amount << " into " << name << "'s account.";
            accounts[i].deposit(amount);
            return 1;
        }
    }

    return -1;
};

template <typename T, size_t size>
int searchAndWithdraw(array<T,size> & accounts, string name, int amount){
    for (int i = 0; i < accounts.size(); i++){
        if (accounts[i].getName() == name){
            cout << "Withdrawing $" << amount << " from " << name << "'s account.";
            accounts[i].withdraw(amount);
            return 1;
        }
    }

    return -1;
};
