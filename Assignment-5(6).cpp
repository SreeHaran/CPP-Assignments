/*Write a class Account that provides the basic functionality of accounts. It allows deposits and withdrawals but not overdraft limits or interest rates.
a. Using the Account class as a base class, write two derived classes called SavingsAccount and CurrentAccount. A SavingsAccount object, in addition to the attributes of an Account object, should have an interest variable and a method which adds interest to the account. A CurrentAccount object, in addition to the attributes of an Account object, should have an overdraft limit variable.
b. Now create a Bank class, an object of which contains an array of Account objects. Accounts in the array could be instances of the Account class, the SavingsAccount class, or the CurrentAccount class. Create some test accounts (some of each type).
c. Write an update method in the bank class. It iterates through each account, updating it in the following ways: Savings accounts get interest added (via the method you already wrote); CurrentAccounts get a letter sent if they are in overdraft.
d. The Bank class requires methods for opening and closing accounts, and for paying a dividend into each account.*/
#include<iostream>
using namespace std;

class Account{
    protected:
        int deposits, withdrawal;
};
class SavingAccount : public Account{
    public:
        float interest = 5.3 ;
        void updateInterest(float newInterest){
            interest = newInterest;
        }
};
class CurrentAccount : public Account{
    public:
        int draftLimit = 50000;
};
class Bank : public SavingAccount, public CurrentAccount{
    int i;
    SavingAccount savingAccounts[10];
    CurrentAccount currentAccount[10];
    public:
        void updateAllInterest(){
            for(i=0;i<10;i++){
                savingAccounts[i].updateInterest(6.0);
            }
        }
        void openAccount(){
            cout<<"Account opened successfully\n";
        }
        void closeAccount(){
            cout<<"Account closed successfully\n";
        }
        void payDividend(){
            cout<<"dividend paid\n";
        }
};
int main(){
    Bank account;
    account.openAccount();
    account.payDividend();
    account.closeAccount();
    return 0;
}
