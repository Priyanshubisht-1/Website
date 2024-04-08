#include <iostream>
using namespace std;

int smallest(int a, int b, int c)
{
    if (a < b)
    {
        if (a < c)
            return a;
        else
            return c;
    }
    else
    {
        if (b < c)
            return b;
        else
            return c;
    }
}

int main()
{
    int n1, n2, n3, small;
    cout << "Enter the 1 number : ";
    cin >> n1;
    cout << "Enter the 2 number : ";
    cin >> n2;
    cout << "Enter the 3 number : ";
    cin >> n3;
    small = smallest(n1, n2, n3);
    cout << "Smallest number from " << n1 << " , " << n2 << " and " << n3 << " is : " << small << endl;
}