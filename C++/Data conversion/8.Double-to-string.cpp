#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string s = {0};
    float val;
    int n, digit, count = 0;
    cout << "Enter the Double number (upto 2 decimal number) : ";
    cin >> val;

    n = (int)((val * 100));
    for (int i = 0; n > 0; i++, n = n / 10)
        count++;

    n = (int)((val * 100));
    for (int i = 0; i < count; i++)
    {
        digit = n % 10;
        s = s + (char)((int)('0' + digit));
        n = n / 10;
    }
    for (int i = 0; i <= (count / 2); i++)
        swap(s[i], s[count - i]);

    s.insert(s.length() - 3, 1, '.');

    cout << "String from Double (upto 2 decimal unit): " << s << endl;
    return 0;
}