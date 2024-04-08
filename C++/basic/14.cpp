#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int num, n, t, sum = 0;
    cout << "Given equation : \n\tn+nn+nnn+....t times " << endl;
    cout << "Enter the number (n) : ";
    cin >> num;
    cout << "Enter the no. of times (t) : ";
    cin >> t;
    n = num;
    for (int i = 1; i <= t; i++)
    {
        sum = sum + n;
        n = n * 10 + num;
    }
    cout << "Sum of given equation : " << sum << endl;
    return 0;
}