#include <iostream>
using namespace std;

int main()
{
    unsigned long n, t, t1 = 0, t2 = 1, i = 2;
    cout << "Term upto which Fibonacci series run : ";
    cin >> n;
    if (n == 1)
        cout << "0 ";
    else
    {
        cout << "0 1 ";
        while (i < n)
        {
            t = t1 + t2;
            cout << t << " ";
            t1 = t2;
            t2 = t;
            i++;
        }
    }
    return 0;
}