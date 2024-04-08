#include <iostream>
using namespace std;
int main()
{
    float a, b, c;
    cout << "Enter the three number : ";
    cin >> a >> b >> c;
    if (a > b)
    {
        if (a > c)
            cout << a << " is Greater";
        else
            cout << c << " is Greater";
    }
    else
    {
        if (b > c)
            cout << b << " is Greater";
        else
            cout << c << " is Greater";
    }
    return 0;
}