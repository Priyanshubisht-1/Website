#include <iostream>
using namespace std;
class Vehicle
{
public:
    virtual void startEngine() = 0;
    virtual void stopEngine() = 0;
};
class Car : public Vehicle
{
public:
    void startEngine() override
    {
        cout << "Car's Engine Started" << endl;
    }
    void stopEngine() override
    {
        cout << "Car's Engine Stopped" << endl;
    }
};
class Motorcycle : public Vehicle
{
public:
    void startEngine() override
    {
        cout << "Motorcycle's Engine Started" << endl;
    }
    void stopEngine() override
    {
        cout << "Motorcycle's Engine Stopped" << endl;
    }
};
int main()
{
    Vehicle *ptr1;
    Car car;
    Motorcycle motorcycle;
    ptr1 = &car;
    ptr1->startEngine();
    ptr1->stopEngine();
    ptr1 = &motorcycle;
    ptr1->startEngine();
    ptr1->stopEngine();
    return 0;
}