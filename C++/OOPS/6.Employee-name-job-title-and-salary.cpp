#include <iostream>
using namespace std;

class Employee
{
    string name;
    string job_title;
    int salary;

public:
    Employee()
    {
        name = "Unknown";
        job_title = "Unknown";
        salary = 0;
    }
    void get()
    {
        cout << "\nEnter the Name of Employee : ";
        getline(cin, name);
        cout << "Enter the Job of Employee : ";
        getline(cin, job_title);
        cout << "Enter the Salary of Employee : ";
        cin >> salary;
    }
    void print()
    {
        cout << "\nEmployee Name : " << name << endl;
        cout << "Job of Employee : " << job_title << endl;
        cout << "Salary of Employee : " << salary << endl;
    }
    void up_salary(int s, int b)
    {
        salary = salary + ((salary * s) / 100) + b;
    }
};

int main()
{
    int i = 0, s, b;
    Employee e;
    e.get();
    e.print();
    cout << "\nEnter the Rate of increase in salary : ";
    cin >> s;
    cout << "Enter the Bonus amount : ";
    cin >> b;
    e.up_salary(s, b);
    e.print();
    return 0;
}
