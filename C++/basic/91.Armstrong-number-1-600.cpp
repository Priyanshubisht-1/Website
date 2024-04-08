#include <iostream>
using namespace std;

int pow(int a, int b)
{
    int pow = 1;
    for (int i = 0; i < b; i++)
        pow = pow * a;
    return pow;
}

int main()
{
    int n, p, count = 0, sum = 0;
    cout << "Armstrong number (from 1 to 600)" << endl;
    for (int i = 1; i < 600; i++)
    {
        n = i;
        sum = 0;
        count = 0;
        while (n != 0)
        {
            n = n / 10;
            count++;
        }
        n = i;
        while (n != 0)
        {
            p = n % 10;
            sum = sum + pow(p, count);

            n = n / 10;
        }
        if (i == sum)
            cout << " " << sum;
    }
    return 0;
}
