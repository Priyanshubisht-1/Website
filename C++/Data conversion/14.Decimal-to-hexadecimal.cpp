#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    string str, hex;
    int num, p = 1, count = 0;
    cout << "Enter Decimal number : ";
    cin >> num;

    while (num > 0)
    {
        if (num % 16 >= 0 && num % 16 <= 9)
            str = str + (char)(num % 16 + '0');

        else if (num % 16 >= 10 && num % 16 <= 16)
            str = str + ((char)((num % 16) + 'A' - 10));

        num = num / 16;
        count++;
    }
    for (int i = count; i >= 0; i--)
        hex.append(1, str[i]);
    cout << "Hexadecimal number : " << hex << endl;
    return 0;
}