#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string str;
    cout << "Enter the string : ";
    getline(cin, str);
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
            for (int j = i; j < str.length(); j++)
                str[j] = str[j + 1];
        else
            continue;
    }
    cout << "After Trim , String : " << str << endl;
    return 0;
}