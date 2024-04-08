#include <iostream>
using namespace std;
class Shape
{
public:
    double area(double radius)
    {
        return 3.14 * radius * radius;
    }
    double area(double length, double width)
    {
        return length * width;
    }
};

int main()
{
    Shape shape;
    double R = 5.0;
    double L = 4.0;
    double W = 3.0;
    cout << "Area of the circle with radius " << R << " is: " << shape.area(R) << endl;
    cout << "Area of the rectangle with length " << L << " and width " << W << " is: "
         << shape.area(L, W) << endl;

    return 0;
}
