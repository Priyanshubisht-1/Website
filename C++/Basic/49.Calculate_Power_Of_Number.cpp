#include <iostream>
using namespace std;
int main()
{
    int base, raise, r, pow = 1;
    cout << "Enter the base value : ";
    cin >> base;
    cout << "Enter the raise to value : ";
    cin >> raise;
    r = raise;
    for (; r > 0; r--)
        pow = pow * base;
    cout << "Power : " << pow << endl;
    return 0;
}