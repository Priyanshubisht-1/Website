#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main()
{
    char ch;
    int val, n, count = 0;
    cout << "Enter the number(in digits) : ";
    cin >> val;
    n = val;
    for (int i = 0; n > 0; i++, n = n / 10)
        count++;
    if (count == 1)
    {
        ch = (char)((int)('0' + val));
        cout << "character from integer : " << ch << endl;
    }
    else
        cout << "Wrong input" << endl;
    return 0;
}