// 8. Write a C++ program to create a class called Shape with methods called getPerimeter() and getArea(). Create a derived class called Circle that overrides the getPerimeter() and getArea() methods to calculate the area and perimeter of a circle.
#include <iostream>
using namespace std;
class Shape
{
public:
    virtual void getArea()
    {
        cout << "Please Specify a shape" << endl;
    }
    virtual void getPerimeter()
    {
        cout << "Please Specify a shape" << endl;
    }
};
class Circle : public Shape
{
    int r;
    void getRadius()
    {
        cout << "Enter Radius : ";
        cin >> r;
    }

public:
    void getArea() override
    {
        getRadius();
        cout << "Area of Circle : " << (3.14) * r * r << endl;
    }
    void getPerimeter() override
    {
        getRadius();
        cout << "Perimeter of Circle : " << 2 * (3.14) * r << endl;
    }
};
int main()
{
    Shape shape;
    Circle circle;
    shape.getArea();
    circle.getArea();
    shape.getPerimeter();
    circle.getPerimeter();
    return 0;
}