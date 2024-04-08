#include <iostream>
#include <string>
using namespace std;
class Person
{
private:
    string name;
    int age;
    string country;

public:
    void setter(string n, int a, string c)
    {
        name = n;
        age = a;
        country = c;
    }
    void getter() const
    {
        cout << "Name: " << name << ", Age: " << age << ", Country: " << country << endl;
    }
};

int main()
{
    Person person;
    person.setter("Jay", 23, "India");
    cout << "Person Information: ";
    person.getter();
    return 0;
}
