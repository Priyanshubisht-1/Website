#include <iostream>
using namespace std;
int main()
{
    int r, h;
    float vol, pi = 3.142;
    cout << "Enter the radius of Cone : ";
    cin >> r;
    cout << "Enter the height of Cone : ";
    cin >> h;
    vol = (((float)1 / 3) * pi * r * r * h);
    cout << "Volume of Cone is : " << vol << endl;
    return 0;
}