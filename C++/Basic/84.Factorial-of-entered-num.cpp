#include <iostream>
using namespace std;
int main()
{
    int num, n, f = 1;
    cout << " Enter the number : ";
    cin >> n;
    num = n;
    while (n > 0)
    {
        f = f * n;
        --n;
    }
    cout << " Factorial of " << num << "! is " << f << endl;
    return 0;
}