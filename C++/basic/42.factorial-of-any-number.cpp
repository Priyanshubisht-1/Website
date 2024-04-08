#include <iostream>
using namespace std;
int main()
{
    int num, n = 5, f = 1;
    num = n;
    while (n > 0)
    {
        f = f * n;
        --n;
    }
    cout << " Factorial of " << num << "! is " << f << endl;
    return 0;
}