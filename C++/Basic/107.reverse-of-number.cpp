#include <iostream>
using namespace std;

int main()
{
    int num, n, rev = 0;
    cout << "Enter the number : ";
    cin >> num;
    n = num;
    while (n > 0)
    {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }
    cout << "Reverse of " << num << " is : " << rev << endl;
    return 0;
}