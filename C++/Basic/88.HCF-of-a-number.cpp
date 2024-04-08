#include <iostream>
using namespace std;
int main()
{
    int n1, n2, hcf, i;
    cout << "Enter 1st number : ";
    cin >> n1;
    cout << "Enter 2nd number : ";
    cin >> n2;
    for (i = 1; i < (n1 > n2 ? n1 : n2); i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
            hcf = i;
        else
            continue;
    }
    cout << "HCF of " << n1 << " and " << n2 << " is " << hcf << endl;
    return 0;
}