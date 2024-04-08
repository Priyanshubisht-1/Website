#include <iostream>
using namespace std;
class Person
{
public:
    virtual void eat() = 0;
    virtual void exercise() = 0;
};
class Athlete : public Person
{
public:
    void eat() override
    {
        cout << "Athelete eats a lot" << endl;
    }
    void exercise() override
    {
        cout << "Athelete Exercises a lot" << endl;
    }
};
class LazyPerson : public Person
{
public:
    void eat() override
    {
        cout << "Lazy Person may eats a lot" << endl;
    }
    void exercise() override
    {
        cout << "Lazy Person does not Exercises a lot" << endl;
    }
};
int main()
{
    Person *ptr1;
    Athlete athlete;
    LazyPerson lazyperson;
    ptr1 = &athlete;
    ptr1->eat();
    ptr1->exercise();
    ptr1 = &lazyperson;
    ptr1->eat();
    ptr1->exercise();
    return 0;
}