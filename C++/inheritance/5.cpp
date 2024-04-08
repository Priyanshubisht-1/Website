// 5. Write a C++ program to create a class known as "BankAccount" with methods called deposit() and withdraw(). Create a derived class called SavingsAccount that overrides the withdraw() method to prevent withdrawals if the account balance falls below one hundred.
#include <iostream>
using namespace std;
class BankAccount
{
public:
    int balance;
    void deposit(int amount)
    {
        cout << "Deposit : " << amount << endl;
        balance += amount;
        cout << "Balance left: " << balance << endl;
    }
    virtual void withdraw(int amount)
    {
        cout << "Withdraw : " << amount << endl;
        balance -= amount;
        cout << "Balance Left : " << balance << endl;
    }
};
class SavingAccount : public BankAccount
{
public:
    void withdraw(int amount) override
    {
        if ((balance - amount) > 100)
        {
            cout << "Withdraw  : " << amount << endl;
            balance -= amount;
        }
        else
        {
            cout << "Minimum Balance Reached ! (---- Transaction Failed !----)" << endl;
        }
        cout << "Balance left : " << balance << endl;
    }
};
int main()
{
    BankAccount bankaccount;
    SavingAccount savingaccount;
    bankaccount.balance = 1000;
    savingaccount.balance = 1000;
    bankaccount.deposit(1000);
    bankaccount.withdraw(3000);
    cout << endl;
    savingaccount.deposit(1000);
    savingaccount.withdraw(2000);
    cout << endl;
    return 0;
}