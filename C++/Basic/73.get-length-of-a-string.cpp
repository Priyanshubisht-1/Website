#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int count = 0;
    string str;
    cout << "Enter the string : ";
    getline(cin, str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    cout << "Length of String : " << count << endl;
    return 0;
}