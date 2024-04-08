#include <iostream>
using namespace std;

class person
{
    string name;
    int age;
    static int r;

public:
    person()
    {
        name = "Unknown";
        age = 0;
    }
    person(string n, int a)
    {
        name = n;
        age = a;
    }
    void print()
    {
        r++;
        cout << "Name of " << r << " person : " << name << endl;
        cout << "Age of " << r << " person : " << age << endl;
    }
};

int person::r = 0;

int main()
{
    person p1("ajay", 19), p2("Sagar ", 20);
    p1.print();
    p2.print();
    return 0;
}
