// 6. Write a C++ program to create a class called Animal with a method named move(). Create a derived class called Cheetah that overrides the move() method to run.
#include <iostream>
using namespace std;
class Animal
{
public:
    virtual void move()
    {
        cout << "Animal is running " << endl;
    }
};
class Cheetah : public Animal
{
public:
    void move() override
    {
        cout << "Cheetah is running " << endl;
    }
};
int main()
{
    Animal animal;
    Cheetah cheetah;
    animal.move();
    cheetah.move();
    return 0;
}