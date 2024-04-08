#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int p = 0;
    string str;
    cout << "Enter the string : ";
    getline(cin, str);
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
            continue;
        else if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
            continue;
        else if (str[i] == ' ')
            continue;
        else
            p++;
    }
    cout << "Number of Punctuation character in string : " << p << endl;
    return 0;
}