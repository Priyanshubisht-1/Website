#include <iostream>
using namespace std;
class Bank
{
    static int l;
    class Accounts
    {
        string name;
        long long account_no;
        long long mobile;
        string address;
        int savings;
        int atm_pin;

    public:
        friend class Bank;
        Accounts()
        {
            name = "Unknown";
            account_no = 0;
            mobile = 0;
            address = "Unknown";
            savings = 0;
        }

        void print()
        {
            cout << "\n<---- Record of Account number : " << account_no << " ---->" << endl;
            cout << "Name : " << name << endl;
            cout << "Mobile no. : " << mobile << endl;
            cout << "Address : " << address << endl;
            cout << "Savings : " << savings << endl;
        }
    };
    Accounts a[100];

public:
    void withdraw()
    {
        long long int ent_acc;
        int ent_pin;
        int chance;
        int w;
        int i = 0;
        cout << "Enter the account number : ";
        cin >> ent_acc;
        while (i != l)
        {
            if (a[i].account_no == ent_acc)
            {
                chance = 3;
                while (chance > 0)
                {
                    chance = 3;
                    cout << "Enter the Atm pin : ";
                    cin >> ent_pin;
                    if (a[i].atm_pin == ent_pin)
                    {
                        chance = 1;
                        cout << "Enter the money you want to withdraw : ";
                        cin >> w;
                        a[i].savings -= w;
                        cout << "Your Left Balance is " << a[i].savings << endl;
                        chance--;
                        break;
                    }
                    else
                    {
                        cout << "Wrong Password ! Chances left : " << chance << endl;
                        chance--;
                    }
                }
                break;
            }
            i++;
        }
        if (i == l)
            cout << "Account not found " << endl;
    }
    void Deposit()
    {
        long long int ent_acc;
        int ent_pin;
        int chance;
        int d;
        int i = 0;
        cout << "Enter the account number : ";
        cin >> ent_acc;
        while (i != l)
        {
            if (a[i].account_no == ent_acc)
            {
                chance = 3;
                while (chance > 0)
                {
                    cout << "Enter the Atm pin : ";
                    cin >> ent_pin;
                    if (a[i].atm_pin == ent_pin)
                    {
                        chance = 1;
                        cout << "Enter the money you want to deposit: ";
                        cin >> d;
                        a[i].savings += d;
                        cout << "Your Balance is " << a[i].savings << endl;
                        chance--;
                        break;
                    }
                    else
                    {
                        cout << "Wrong Password ! Chances left : " << chance << endl;
                        chance--;
                    }
                }
                break;
            }
            i++;
        }
        if (i == l)
            cout << "Account not found " << endl;
    }
    void remove(int i)
    {
        a[i].~Accounts();
        cout << "Account was Successfully removed." << endl;
    }
    void add(string n, long long ac, long long m, string ad, int s, int pin)
    {
        a[l].name = n;
        a[l].account_no = ac;
        a[l].mobile = m;
        a[l].address = ad;
        a[l].savings = s;
        a[l].atm_pin = pin;
        l++;
    }
};
int Bank::l = 0;

int main()
{
    int i = 0, id;
    Bank b;
    char ch = 'y', del;
    while ((tolower(ch)) == 'y')
    {
        cout << "\nWelcome to SBI Bank" << endl;
        cout << "How would u use as" << endl;
        cout << "0 -> Bank worker" << endl;
        cout << "1 -> User" << endl;
        cin >> id;
        if (id == 0)
        {
            b.add("Priyanshu", 1234567812345678, 9888365158, "#2046,Sec 40-C,Chandigarh", 10000, 1234);
            cout << "Do you want to add more ? (y - yes) : ";
            cin >> ch;
            cout << "Do you want to remove previous one ? (y - yes) : ";
            cin >> del;
            if (del == 'y')
                b.remove(i);
            cin.ignore();
            i++;
        }
        else
        {
            b.add("Priyanshu", 1234567812345678, 9888365158, "#2046,Sec 40-C,Chandigarh", 10000, 1234);
            cout << "Hello User ! what would you like to do ?" << endl;
            cout << "0 -> withdraw" << endl;
            cout << "1 -> deposit" << endl;
            cin >> id;
            if (id == 0)
                b.withdraw();
            else
                b.Deposit();
            cout << "Do you want to use again ? (y - yes) : ";
            cin >> ch;
        }
    }
    return 0;
}