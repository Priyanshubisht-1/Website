#include <iostream>
using namespace std;
class Shape
{
public:
    virtual void calculateArea() = 0;
    virtual void calculatePerimeter() = 0;
};
class Circle : public Shape
{
    int r;
    void getRadius()
    {
        cout << "\nEnter Radius of Circle : ";
        cin >> r;
    }

public:
    void calculateArea() override
    {
        getRadius();
        cout << "Area of Circle is " << (3.14) * (r) * (r) << endl;
    }
    void calculatePerimeter() override
    {
        getRadius();
        cout << "Perimeter of Circle is " << 2 * (3.14) * (r) << endl;
    }
};
class Triangle : public Shape
{
public:
    void calculateArea() override
    {
        int b, h;
        cout << "\nEnter Base of Triangle : ";
        cin >> b;
        cout << "Enter Height of Triangle : ";
        cin >> h;
        cout << "Area of Triangle is " << (0.5) * b * h << endl;
    }
    void calculatePerimeter() override
    {
        int a, b, c;
        cout << "\nEnter length of 1st side : ";
        cin >> a;
        cout << "Enter length of 2nd side : ";
        cin >> b;
        cout << "Enter length of 3rd side : ";
        cin >> c;
        cout << "Perimeter is : " << a + b + c << endl;
    }
};
int main()
{
    Shape *ptr1;
    Circle circle;
    Triangle triangle;
    ptr1 = &circle;
    ptr1->calculateArea();
    ptr1->calculatePerimeter();
    ptr1 = &triangle;
    ptr1->calculateArea();
    ptr1->calculatePerimeter();
    return 0;
}