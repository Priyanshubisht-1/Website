#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string str;
    int i;
    cout << "Enter the string : ";
    getline(cin, str);

    for (i = 0; i < str.length(); i++)
    {
        if (str[i] != str[str.length() - i - 1])
        {
            cout << "Given String is not Pallidrome" << endl;
            return 0;
        }
    }
    if (i == str.length())
        cout << "Given String is Pallidrome" << endl;

    return 0;
}