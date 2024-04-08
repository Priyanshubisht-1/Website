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
    if (b > a && c > b)
        cout << "Numbers are in Increasing Order.";
    else if (a > b && b > c)
        cout << "Numbers are in Decreasing Order.";
    else
        cout << "Numbers are in no Order.";
    return 0;
}