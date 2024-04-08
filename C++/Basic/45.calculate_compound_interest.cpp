#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float p, r, t, ci;
    cout << "Enter principal amount : ";
    cin >> p;
    cout << "Enter rate of interest : ";
    cin >> r;
    cout << "Enter number of years : ";
    cin >> t;
    ci = (p * (pow(1 + (r / 100), t)) - p);
    cout << "Compound Interest: " << ci;
    return 0;
}
