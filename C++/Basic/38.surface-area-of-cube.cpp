#include <iostream>
using namespace std;
int main()
{
    float s;
    float ta, la;
    cout << "Enter the side of cube : ";
    cin >> s;
    ta = (6 * s * s);
    la = (4 * s * s);
    cout << "Total Surface Area of cube is : " << ta << endl;
    cout << "Curved Surface Area of cube is : " << la << endl;
    return 0;
}