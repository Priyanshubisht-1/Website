// 7. Write a C++ program to create a class known as Person with methods called getFirstName() and getLastName(). Create a derived class called Employee that adds a new method named getEmployeeId() and overrides the getLastName() method to include the employee's job title
#include <iostream>
using namespace std;
class Person
{
public:
    string fname, lname;
    virtual void getLastname()
    {
        cout << "Enter Last name : ";
        cin >> lname;
    }
    void getFirstName()
    {
        cout << "Enter First name : ";
        cin >> fname;
    }
    void displayInfo()
    {
        cout << "Employee : " << fname << " " << lname << endl;
    }
};
class Employee : public Person
{
    int id;
    string job;

public:
    void getLastname() override
    {
        cout << "Enter Last name and Job : ";
        cin >> lname >> job;
    }
    void getEmployeeId()
    {
        cout << "Enter ID : ";
        cin >> id;
    }
    void displayInfo()
    {
        cout << "Employee " << id << " : " << fname << " " << lname << "(" << job << ")" << endl;
    }
};
int main()
{
    Person person;
    Employee employee1;
    person.getFirstName();
    person.getLastname();
    person.displayInfo();
    cout << endl;
    employee1.getFirstName();
    employee1.getLastname();
    employee1.getEmployeeId();
    employee1.displayInfo();
    return 0;
}