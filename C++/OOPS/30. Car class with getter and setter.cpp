#include <iostream>
#include <string>

using namespace std;

class Car
{
private:
    string company;
    string model;
    int year;
    double mile;

public:
    void sComp(string c)
    {
        company = c;
    }

    void sModl(string m)
    {
        model = m;
    }

    void sYear(int y)
    {
        year = y;
    }

    void uMile(double dist, double fuel)
    {
        if (fuel > 0)
        {
            mile = dist / fuel;
        }
        else
        {
            cout << "Error: Fuel consumption cannot be zero or negative." << endl;
        }
    }

    string gComp() const
    {
        return company;
    }

    string gModl() const
    {
        return model;
    }

    int gYear() const
    {
        return year;
    }

    double gMile() const
    {
        return mile;
    }
};

int main()
{
    Car myCar;

    myCar.sComp("Nissan");
    myCar.sModl("Skyline R32");
    myCar.sYear(1999);

    double dist = 3000.0;
    double fuel = 40.0;
    myCar.uMile(dist, fuel);

    cout << "Company Name: " << myCar.gComp() << endl;
    cout << "Model Name: " << myCar.gModl() << endl;
    cout << "Year: " << myCar.gYear() << endl;
    cout << "Mileage: " << myCar.gMile() << " km/l" << endl;

    return 0;
}
