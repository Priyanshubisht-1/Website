#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    string accNo;
    double bal;

public:
    void setter(string accNumber, double balance)
    {
        accNo = accNumber;
        bal = balance;
    }

    void getter() const
    {
        cout << "Account Number: " << accNo << ", Balance: Rs." << bal << endl;
    }
};

int main()
{
    BankAccount account;
    account.setter("AC123456789", 7000.0);
    cout << "Account Information: ";
    account.getter();
    return 0;
}
