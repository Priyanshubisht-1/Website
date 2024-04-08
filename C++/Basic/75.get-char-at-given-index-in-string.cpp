#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int index;
    string str;
    cout << "Enter the String : ";
    getline(cin, str);
    cout << "Enter the Index : ";
    cin >> index;
    if (index > 0 && index < str.length())
        cout << "Character at index " << index << " is " << str[index - 1] << endl;
    else
        cout << "Invalid Index" << endl;
    return 0;
}