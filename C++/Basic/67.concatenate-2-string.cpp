#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string str1, str2;
    cout << "Enter the 1st string : ";
    getline(cin, str1);
    cout << "Enter the 2nd string : ";
    getline(cin, str2);
    cout << "Result of concatenation : " << str1 + str2 << endl;
    return 0;
}