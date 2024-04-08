#include <iostream>
using namespace std;
int main()
{
    int r, h;
    float vol, pi = 3.142;
    cout << "Enter the radius of Cylinder : ";
    cin >> r;
    cout << "Enter the height of Cylinder : ";
    cin >> h;
    vol = (pi * r * r * h);
    cout << "Area of Cylinder is : " << vol << endl;
    return 0;
}