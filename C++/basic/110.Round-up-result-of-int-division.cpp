#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float v;
    int div, l, d, c = 0;
    cout << "Enter the Divisor : ";
    cin >> d;
    cout << "Enter the Dividend : ";
    cin >> div;
    v = (float)div / d;
    l = (int)div / d;
    while (l > 0)
    {
        l = l / 10;
        c++;
    }
    cout << "Rounded float value : " << setprecision(c + 2) << v;
    return 0;
}