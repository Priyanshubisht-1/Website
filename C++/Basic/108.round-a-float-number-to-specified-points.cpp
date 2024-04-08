#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float v;
    int l, p, c = 0;
    cout << "Enter the float value : ";
    cin >> v;
    cout << "Enter the decimal point : ";
    cin >> p;
    l = (int)v;
    while (l > 0)
    {
        l = l / 10;
        c++;
    }
    cout << "Rounded float value : " << setprecision(c + p) << v;
    return 0;
}