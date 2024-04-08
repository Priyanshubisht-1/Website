#include <iostream>
using namespace std;

int fact(int n)
{
    if (n == 0)
        return 1;
    else
        return (n * fact(n - 1));
}

int main()
{
    int num, f;
    cout << "Enter the number : ";
    cin >> num;
    f = fact(num);
    cout << "Factorial of " << num << " is : " << f << endl;
    return 0;
}