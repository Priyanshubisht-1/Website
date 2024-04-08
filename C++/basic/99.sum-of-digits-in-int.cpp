#include <iostream>
using namespace std;
int main()
{
    int x, sum = 0;
    cout << "Enter decimal number : ";
    cin >> x;
    while (x > 0)
    {
        sum = sum + x % 10;
        x = x / 10;
    }
    cout << "Sum of digits : " << sum << endl;
    return 0;
}