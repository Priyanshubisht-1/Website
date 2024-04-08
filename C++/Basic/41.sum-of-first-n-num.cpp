#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Enter the number of terms : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
        sum = sum + i;
    cout << "Sum of first " << n << " number is " << sum << endl;
    return 0;
}