#include <iostream>
using namespace std;
class Animal
{
public:
    virtual void sound() = 0;
};
class Pig : public Animal
{
public:
    void sound() override
    {
        cout << "Pig Oink" << endl;
    }
};
class Lion : public Animal
{
public:
    void sound() override
    {
        cout << "Lion Roars" << endl;
    }
};
int main()
{
    Animal *ptr;
    Pig pig;
    Lion lion;
    ptr = &pig;
    ptr->sound();
    ptr = &lion;
    ptr->sound();
    return 0;
}