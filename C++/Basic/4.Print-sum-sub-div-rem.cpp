#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout << "Enter first number : ";
    cin >> x;
    cout << "Enter second number : ";
    cin >> y;

    cout << "\nSum of " << x << " and " << y << " is : " << (x + y);
    cout << "\nSubtraction of " << x << " with " << y << " is : " << (x - y);
    cout << "\nProduct of " << x << " and " << y << " is : " << (x * y);
    cout << "\ndivision of " << y << " from " << x << " is : " << (x / y);
    return 0;
}