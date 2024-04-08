#include <iostream>
#include <string>
using namespace std;
class Employee
{
    string name;
    double salary;
    string date;

public:
    void get()
    {
        cout << "Enter the name of the employee : ";
        cin >> name;
        cout << "Enter the salary : ";
        cin >> salary;
        cout << "Enter the hire date in (dd.mm.yyyy) : ";
        cin >> date;
    }
    int serviceyear()
    {
        int l = date.length();
        string ch;
        int y = stoi(ch + date[l - 4] + date[l - 3] + date[l - 2] + date[l - 1]);
        return 2024 - y;
    }
};
int main()
{
    Employee e1;
    e1.get();
    cout << "Service year of the emplpoyee : " << e1.serviceyear();
    return 0;
}