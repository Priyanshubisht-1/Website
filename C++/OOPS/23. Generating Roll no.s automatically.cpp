#include <iostream>
#include <string>
using namespace std;
class Student
{
private:
    static int rollCounter;
    int rn;
    string nm;
    string cl;

public:
    Student()
    {
        rn = ++rollCounter;
    }

    Student(string name, string className) : nm(name), cl(className)
    {
        rn = ++rollCounter;
    }

    void display()
    {
        cout << "Roll No: " << rn << ", Name: " << nm << ", Class: " << cl << endl;
    }
};

int Student::rollCounter = 0;

int main()
{
    Student students[10];
    string name, cName;

    for (int i = 0; i < 10; ++i)
    {
        cout << "Enter name of student " << i + 1 << ": ";
        getline(cin, name);
        cout << "Enter class of student " << i + 1 << ": ";
        getline(cin, cName);
        students[i] = Student(name, cName);
    }
    cout << "Students Information:" << endl;
    for (int i = 0; i < 10; ++i)
    {
        students[i].display();
    }

    return 0;
}
