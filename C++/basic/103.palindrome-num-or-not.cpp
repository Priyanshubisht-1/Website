#include <iostream>
using namespace std;
int main()
{
    int num, n, rev = 0;
    cout << "Enter the number : ";
    cin >> num;
    n = num;
    while (n != 0)
    {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }
    if (num == rev)
        cout << num << " is palindrome." << endl;
    else
        cout << num << " is not a palindrome." << endl;
    return 0;
}