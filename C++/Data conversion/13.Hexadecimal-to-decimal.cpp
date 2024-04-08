#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    string x;
    int sum = 0;
    cout << "Enter Hexadecimal number : ";
    cin >> x;

    for (int i = x.length() - 1, j = 0; i >= 0; i--, j++)
    {
        if (x[i] >= '0' && x[i] <= '9')
            sum = sum + (((int)(x[i] - '0')) * (pow(16, j)));
        else if (isupper(x[i]))
            sum = sum + (((int)(x[i] - 'A' + 10)) * (pow(16, j)));
        else if (islower(x[i]))
            sum = sum + (((int)(x[i] - 'a' + 10)) * (pow(16, j)));
        else
        {
            cout << "Wrong input" << endl;
            return 0;
        }
    }
    cout << "Decimal number : " << sum << endl;
    return 0;
}