#include <iostream>

using namespace std;

class Rectangle
{
private:
    double len;
    double wid;

public:
    void setter(double length, double width)
    {
        len = length;
        wid = width;
    }

    void getter() const
    {
        cout << "Length of Rectangle : " << len << "\nWidth  of Rectangle : " << wid << endl;
    }
};

int main()
{
    Rectangle rect;
    rect.setter(15.0, 7.0);
    cout << "<-- Rectangle Dimensions -->" << endl;
    rect.getter();
    return 0;
}
