#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int x, i;
    string str;
    cout << "Enter the String : ";
    getline(cin, str);
    cout << "Enter the position for removing character : ";
    cin >> x;
    for (i = x - 1; i < str.length(); i++)
        str[i] = str[i + 1];
    str[i] = ' ';
    cout << "After removing, String : " << str << endl;
    return 0;
}