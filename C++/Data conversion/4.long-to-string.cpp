#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string s = {0};
    int n, count = 0, digit;
    long val;
    cout << "Enter the number : ";
    cin >> val;
    n = val;
    for (int i = 0; n > 0; i++, n = n / 10)
        count++;

    n = val;
    for (int i = 0; i < count; i++)
    {
        digit = n % 10;
        s = s + (char)((int)('0' + digit));
        n = n / 10;
    }

    for (int i = 0; i <= count / 2; i++)
        swap(s[i], s[count - i]);
    cout << "String from integer : " << s << endl;
    return 0;
}