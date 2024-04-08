// 1. Write a C++ program to create a class called Animal with a method called makeSound(). Create a derived class called Cat that overrides the makeSound() method to bark.
#include <iostream>
using namespace std;
class Animal
{
public:
    virtual void makeSound()
    {
        cout << "Animal is making sound" << endl;
    }
};
class Dog : public Animal
{
public:
    void makeSound() override
    {
        cout << "Dog bark" << endl;
    }
};
int main()
{
    Animal animal;
    Dog dog;
    animal.makeSound();
    dog.makeSound();
    return 0;
}