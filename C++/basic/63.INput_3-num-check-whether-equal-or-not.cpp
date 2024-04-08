#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter the 1st number : ";
    cin >> a;
    cout << "Enter the 2nd number : ";
    cin >> b;
    cout << "Enter the 3rd number : ";
    cin >> c;
    if (a == b && b == c)
        cout << "Entered numbers are equal.";
    else
        cout << "Entered numbers are not equal.";
    return 0;
}