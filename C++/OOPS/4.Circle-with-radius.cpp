#include <iostream>
#define PI 3.14
using namespace std;

class Circle
{
public:
    float r;

    Circle()
    {
        r = 0;
    }

    void get()
    {
        cout << "Radius of Circle : ";
        cin >> r;
    }

    void print()
    {
        float Area = PI * r * r;
        float Circumference = 2 * PI * r;
        cout << "\n<--- Circle of radius : " << r << " --->" << endl;
        cout << "Area of Rectangle : " << Area << endl;
        cout << "Circumference of Rectangle : " << Circumference << endl;
    }
};

int main()
{
    Circle c1, c2;
    c1.get();
    c1.print();
    c2.r = 20;
    c2.print();
    return 0;
}