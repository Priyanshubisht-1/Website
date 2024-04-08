#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int line = 0;
    string str;
    cout << "Enter the string : ";
    getline(cin, str);
    for (int i = 0; i <= str.length(); i++)
    {
        if ((str[i] == '.') || (str[i] == '\0' && str[i - 1] != '.'))
            line++;
        else
            continue;
    }
    cout << " Number of lines in a String : " << line << endl;
    return 0;
}