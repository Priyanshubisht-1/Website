#include <iostream>
using namespace std;
int main()
{
    float l, b, h;
    float ta, la;
    cout << "Enter the length of Cuboid : ";
    cin >> l;
    cout << "Enter the breadth of Cuboid : ";
    cin >> b;
    cout << "Enter the height of Cuboid: ";
    cin >> h;
    ta = (2 * ((l * b) + (b * h) + (l * h)));
    la = (2 * (l + b) * h);
    cout << "Total Surface Area of Cuboid is : " << ta << endl;
    cout << "Curved Surface Area of Cuboid is : " << la << endl;
    return 0;
}