#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float v;
    int l, c = 0;
    cout << "Enter the float value : ";
    cin >> v;
    l = (int)v;
    while (l > 0)
    {
        l = l / 10;
        c++;
    }
    cout << "Rounded float value : " << setprecision(c + 2) << v;
    return 0;
}