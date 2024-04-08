#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string s, str;
    char ch;
    cout << "Enter the string : ";
    getline(cin, s);
    cout << "Enter the character with which you want to remove : ";
    cin >> ch;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ch)
            continue;
        else
            str.append(1, s[i]);
    }
    cout << "Resulting string : " << str << endl;

    return 0;
}