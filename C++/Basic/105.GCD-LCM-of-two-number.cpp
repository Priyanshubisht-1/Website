#include <iostream>
using namespace std;
int main()
{
    int n1, n2, gcd, lcm = 1, i;
    cout << "Enter 1st number : ";
    cin >> n1;
    cout << "Enter 2nd number : ";
    cin >> n2;
    for (i = 1; i < (n1 > n2 ? n1 : n2); i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
            gcd = i;
        else
            continue;
    }
    lcm = (n1 > n2 ? n1 : n2);
    for (;;)
    {
        if (lcm % n1 == 0 && lcm % n2 == 0)
            break;
        lcm++;
    }
    cout << "GCD of " << n1 << " and " << n2 << " is " << gcd << endl;
    cout << "LCM of " << n1 << " and " << n2 << " is " << lcm << endl;
    return 0;
}