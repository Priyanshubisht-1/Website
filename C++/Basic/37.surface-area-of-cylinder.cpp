#include <iostream>
using namespace std;
int main()
{
    int r, h;
    float ta, la, pi = 3.142;
    cout << "Enter the radius of Cylinder : ";
    cin >> r;
    cout << "Enter the height of Cylinder : ";
    cin >> h;
    ta = (2 * pi * r * (r + h));
    la = (2 * pi * r * h);
    cout << "Total Surface Area of Cylinder is : " << ta << endl;
    cout << "Curved Suraface Area of Cylinder is : " << la << endl;
    return 0;
}