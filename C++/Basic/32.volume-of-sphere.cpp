#include <iostream>
using namespace std;
int main()
{
    float r;
    float vol, pi = 3.142;
    cout << "Enter the radius of Sphere: ";
    cin >> r;
    vol = (((float)4 / 3) * pi * r * r * r);
    cout << "Volume of Sphere is : " << vol << endl;
    return 0;
}