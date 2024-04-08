#include <iostream>
#include <ctype.h>
#include <string.h>
using namespace std;
int main()
{
    string str;
    cout << "Enter the string : ";
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        if ((isalpha(str[i])) == 0)
        {
            cout << "Invalid Input";
            return 0;
        }
        else
        {
            if (isupper(str[i]))
                continue;
            else
                str[i] = (char)((int)str[i] - 32);
        }
    }
    cout << "String in Uppercase : " << str << endl;
    return 0;
}