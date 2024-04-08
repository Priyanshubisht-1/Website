#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int x, i;
    string str, rev;
    cout << "Enter the String : ";
    getline(cin, str);
    for (i = str.length() - 1; i >= 0; i--)
        rev.append(1, str[i]);
    cout << "Reversed String : " << rev << endl;
    return 0;
}