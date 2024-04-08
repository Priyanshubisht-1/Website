#include <iostream>
using namespace std;

int main()
{
    string s;
    int i;
    cout << "Enter the string : ";
    getline(cin, s);

    for (i = 0; i < s.length(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
            continue;
        else
            break;
    }
    if (i == s.length())
        cout << "String contain only Digits." << endl;
    else
        cout << "All Character in String are not Digits." << endl;

    return 0;
}