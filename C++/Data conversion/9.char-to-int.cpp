#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char ch;
    int val;
    cout << "Enter the charcter (in number): ";
    cin >> ch;
    val = (int)(ch - '0');
    cout << "Value in integer : " << val << endl;
    return 0;
}