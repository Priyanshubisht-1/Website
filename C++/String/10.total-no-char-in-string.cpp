#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string str;
    cout << "Enter the string : ";
    getline(cin, str);

    cout << "Number of words in string : " << str.length() << endl;
    return 0;
}