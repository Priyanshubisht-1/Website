#include <iostream>
using namespace std;
class Animal
{
public:
    virtual void eat() = 0;
    virtual void sleep() = 0;
};
class Lion : public Animal
{
public:
    void eat() override
    {
        cout << "Lion is eating" << endl;
    }
    void sleep() override
    {
        cout << "Lion is sleeping" << endl;
    }
};
class Tiger : public Animal
{
public:
    void eat() override
    {
        cout << "Tiger is eating" << endl;
    }
    void sleep() override
    {
        cout << "Tiger is sleeping" << endl;
    }
};
class Deer : public Animal
{
public:
    void eat() override
    {
        cout << "Deer is eating" << endl;
    }
    void sleep() override
    {
        cout << "Deer is sleeping" << endl;
    }
};
int main()
{
    Animal *ptr1;
    Lion lion;
    Tiger tiger;
    Deer deer;

    ptr1 = &lion;
    ptr1->eat();
    ptr1->sleep();

    ptr1 = &tiger;
    ptr1->eat();
    ptr1->sleep();

    ptr1 = &deer;
    ptr1->eat();
    ptr1->sleep();
    return 0;
}