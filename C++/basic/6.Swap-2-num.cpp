#include <iostream>
using namespace std;
int main()
{
    int x, y, z;
    cout << "Enter value of x : ";
    cin >> x;
    cout << "Enter value of y : ";
    cin >> y;

    cout << "\n<-----Before Swapping----->" << endl;
    cout << "x = " << x << " , y = " << y << endl;

    z = x;
    x = y;
    y = z;

    cout << "\n<-----After Swapping----->" << endl;
    cout << "x = " << x << " , y = " << y << endl;
    return 0;
}