#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int i;
    string str;
    cout << "Enter the String : ";
    getline(cin, str);
    for (i = 0; i < str.length() / 2; i++)
        swap(str[i], str[str.length() - i - 1]);
    cout << "Reversed String : " << str << endl;
    return 0;
}