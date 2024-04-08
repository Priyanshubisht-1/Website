#include <iostream>
using namespace std;

int main()
{
    char ch;
    string str;
    cout << "Enter the string : ";
    getline(cin, str);
    cout << "Individual Characters : ";
    for (int i = 0; i < str.length(); i++)
    {
        ch = str[i];
        cout << "'" << ch << "' ";
    }
    return 0;
}