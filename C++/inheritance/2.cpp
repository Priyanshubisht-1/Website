#include <iostream>
using namespace std;
class Vehicle
{
public:
    virtual void drive()
    {
        cout << "Driving Vehicle" << endl;
    }
};
class Car : public Vehicle
{
public:
    void drive() override
    {
        cout << "Repairing a Car" << endl;
    }
};
int main()
{
    Vehicle vehicle;
    Car car;
    vehicle.drive();
    car.drive();
    return 0;
}