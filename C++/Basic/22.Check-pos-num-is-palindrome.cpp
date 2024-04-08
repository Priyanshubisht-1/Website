#include <iostream>
using namespace std;
int main()
{
    int num, n, rev = 0;
    cout << "Enter the number : ";
    cin >> num;
    n = num;
    if (num >= 0)
    {
        while (n > 0)
        {
            rev = rev * 10 + n % 10;
            n = n / 10;
        }
        if (rev == num)
            cout << "Number " << num << " is a palindrome";
        else
            cout << "Number " << num << " is not a palindrome";
    }
    else
    {
        cout << "Wrong Input" << endl;
    }
    return 0;
}