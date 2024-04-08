#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d, e;
    float avg;
    cout << "Enter first number : ";
    cin >> a;
    cout << "Enter second number : ";
    cin >> b;
    cout << "Enter third number : ";
    cin >> c;
    cout << "Enter fourth number : ";
    cin >> d;
    cout << "Enter fifth number : ";
    cin >> e;
    avg = ((a + b + c + d + e) / 5);
    cout << "\nAverage of entered numbers is : " << avg;
    return 0;
}