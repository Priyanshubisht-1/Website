#include <iostream>
#include <string>
using namespace std;
class Employee
{
private:
    int employee_id;
    string employee_name;
    int employee_salary;

public:
    void setEmployeeId(int id)
    {
        employee_id = id;
    }

    void setEmployeeName(string name)
    {
        employee_name = name;
    }
    void setEmployeeSalary(int salary)
    {
        employee_salary = salary;
    }
    int getEmployeeId()
    {
        return employee_id;
    }
    string getEmployeeName()
    {
        return employee_name;
    }
    string getEmployeeSalary()
    {
        return "Salary of Employee : Rs." + to_string(employee_salary);
    }
};

int main()
{
    Employee emp;
    emp.setEmployeeId(4211);
    emp.setEmployeeName("Rajat");
    emp.setEmployeeSalary(29000);
    cout << "Name of Employee : " << emp.getEmployeeName() << endl;
    cout << "ID of Employee : " << emp.getEmployeeId() << endl;
    cout << emp.getEmployeeSalary() << endl;
    return 0;
}
