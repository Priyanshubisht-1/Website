#include <iostream>
using namespace std;
class Animal
{
public:
    virtual void sound() = 0;
};
class Dog : public Animal
{
public:
    void sound() override
    {
        cout << "Dog Barks" << endl;
    }
};
class Cow : public Animal
{
public:
    void sound() override
    {
        cout << "Cow moos" << endl;
    }
};
int main()
{
    Animal *ptr;
    Dog dog;
    Cow cow;
    ptr = &dog;
    ptr->sound();
    ptr = &cow;
    ptr->sound();
    return 0;
}