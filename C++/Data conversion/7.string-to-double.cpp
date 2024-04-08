#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string s;
    int i, j;
    double val = 0, val2 = 0;
    cout << "Enter the string (in Double): ";
    cin >> s;
    for (i = 0; i < s.length() && s[i] != '.'; i++)
        val = val * 10 + ((int)(s[i] - '0'));

    for (j = s.length() - 1; j > i; j--)
        val2 = val2 / 10 + ((float)(s[j] - '0')) / 10;

    cout << "Value in Double : " << val + val2 << endl;

    return 0;
}