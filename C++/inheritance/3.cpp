// 3. Write a C++ program to create a class called Shape with a method called getArea(). Create a derived class called Rectangle that overrides the getArea() method to calculate the area of a rectangle.
#include <iostream>
using namespace std;
class Shape
{
public:
    virtual void getArea()
    {
        cout << "Specify a shape" << endl;
    }
};
class Square : public Shape
{
public:
    void getArea() override
    {
        int s;
        cout << "Enter the side : ";
        cin >> s;
        cout << "Area of Square: " << s * s << endl;
        cout << "Perimeter of Square: " << 4 * s << endl;
    }
};
int main()
{
    Shape shape;
    Square square;
    shape.getArea();
    square.getArea();
    return 0;
}