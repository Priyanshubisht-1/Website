#include <iostream>
using namespace std;

bool mid(int a, int b, int c)
{
    if ((a > b && a < c) || (a < b && a > c))
        return true;
    else if ((b > a && b < c) || (b < a && b > c))
        return true;
    else if ((c > b && c < a) || (c < b && c > a))
        return true;
    else
        return false;
}

int main()
{
    int n1, n2, n3;
    cout << "Enter the 1st number : ";
    cin >> n1;
    cout << "Enter the 2nd number : ";
    cin >> n2;
    cout << "Enter the 3rd number : ";
    cin >> n3;
    if (mid(n1, n2, n3))
        cout << "One is middle point between other two " << endl;
    else
        cout << "One is not middle point between other two " << endl;
    return 0;
}