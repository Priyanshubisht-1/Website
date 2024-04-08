#include <iostream>
using namespace std;
class Shape3D
{
public:
    virtual void calculateVolume() = 0;
    virtual void calculateSurfaceArea() = 0;
};
class Sphere : public Shape3D
{
    int r;
    void getRadius()
    {
        cout << "\nEnter radius of Sphere: ";
        cin >> r;
    }

public:
    void calculateVolume() override
    {
        getRadius();
        cout << "Volume of Sphere is : " << (4 / 3) * (3.14) * (r) * (r) * (r) << endl;
    }
    void calculateSurfaceArea() override
    {
        getRadius();
        cout << "Total Surface Area of Sphere is : " << 4 * (3.14) * (r) * (r) << endl;
    }
};
class Cube : public Shape3D
{
    int s;
    void getSides()
    {
        cout << "\nEnter Length of side of Cube: ";
        cin >> s;
    }

public:
    void calculateVolume() override
    {
        getSides();
        cout << "Area of Cube is : " << s * s * s << endl;
    }
    void calculateSurfaceArea() override
    {
        getSides();
        cout << "Perimeter of Cube is : " << 6 * (s * s) << endl;
    }
};
int main()
{
    Shape3D *ptr1;
    Sphere sphere;
    Cube cube;
    ptr1 = &sphere;
    ptr1->calculateVolume();
    ptr1->calculateSurfaceArea();
    ptr1 = &cube;
    ptr1->calculateVolume();
    ptr1->calculateSurfaceArea();
    return 0;
}