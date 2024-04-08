// 4. Write a C++ program to create a class called Employee with methods called work() and getSalary(). Create a derived class called HRManager that overrides the work() method and adds a new method called addEmployee().
#include <iostream>
using namespace std;
class Employee
{
public:
    virtual void work()
    {
        cout << "Employee works" << endl;
    }
    void getSalary()
    {
        cout << "Get Salary!!!" << endl;
    }
};
class HRManager : public Employee
{
    void addEmployee()
    {
        cout << "New Employee added" << endl;
    }

public:
    void work() override
    {
        cout << "HR is working " << endl;
        addEmployee();
    }
};
int main()
{
    Employee emp;
    HRManager hr;
    emp.work();
    emp.getSalary();
    hr.work();
    hr.getSalary();
    return 0;
}