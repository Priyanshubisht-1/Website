#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string s;
    long val = 0;
    cout << "Enter the string (in numbers): ";
    cin >> s;
    for (int i = 0; i < s.length(); i++)
        val = val * 10 + ((long)(s[i] - '0'));

    cout << "Value in Long integer: " << val << endl;
    return 0;
}