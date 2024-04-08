#include <iostream>
using namespace std;
int main()
{
    int l, b, h;
    float vol;
    cout << "Enter the length of Cuboid : ";
    cin >> l;
    cout << "Enter the breadth of Cuboid : ";
    cin >> b;
    cout << "Enter the height of Cuboid: ";
    cin >> h;
    vol = (l * b * h);
    cout << "Volume of Cuboid is : " << vol << endl;
    return 0;
}