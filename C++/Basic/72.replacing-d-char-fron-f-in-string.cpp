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
        if (str[i] == 'd')
            str[i] = 'f';
        else
            continue;
    }
    cout << " After Replacing, String : " << str << endl;
    return 0;
}