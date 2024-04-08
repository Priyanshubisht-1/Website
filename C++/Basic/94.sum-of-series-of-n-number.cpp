#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "Enter the number of terms (n) : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
        sum = sum + n;
    cout << "Sum of the series : " << sum << endl;
    return 0;
}