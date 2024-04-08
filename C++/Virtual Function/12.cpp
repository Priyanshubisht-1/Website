#include <iostream>
using namespace std;
class GeometricShape
{
public:
    virtual void area() = 0;
    virtual void perimeter() = 0;
};
class Square : public GeometricShape
{
    int side;
    void getSide()
    {
        cout << "\nEnter length of Side of Square : ";
        cin >> side;
    }

public:
    void area() override
    {
        getSide();
        cout << "Area of Square is : " << side * side << endl;
    }
    void perimeter() override
    {
        getSide();
        cout << "Perimeter of Square is : " << 4 * side << endl;
    }
};
class Triangle : public GeometricShape
{
public:
    void area() override
    {
        int b, h;
        cout << "\nEnter base of Triangle : ";
        cin >> b;
        cout << "Enter height of Triangle : ";
        cin >> h;
        cout << "Area of Triangle is : " << (0.5) * b * h << endl;
    }
    void perimeter() override
    {
        int a, b, c;
        cout << "\nEnter 1st sides of Triangle : ";
        cin >> a;
        cout << "Enter 2nd sides of Triangle : ";
        cin >> b;
        cout << "Enter 3rd sides of Triangle : ";
        cin >> c;
        cout << "Perimeter of Triangle is : " << a + b + c << endl;
    }
};
int main()
{
    GeometricShape *ptr1;
    Square square;
    Triangle triangle;
    ptr1 = &square;
    ptr1->area();
    ptr1->perimeter();
    ptr1 = &triangle;
    ptr1->area();
    ptr1->perimeter();
    return 0;
}