#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int x, sum = 0;
    cout << "Enter binary number : ";
    cin >> x;
    for (int i = 0; x > 0; i++)
    {
        sum = sum + ((x % 10) * (pow(2, i)));
        x = x / 10;
    }
    cout << "Decimal number : " << sum << endl;
    return 0;
}