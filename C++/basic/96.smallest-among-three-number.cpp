#include <iostream>
using namespace std;

int main()
{
    int a, b, c, small;
    cout << "Enter the First Number  : ";
    cin >> a;
    cout << "Enter the Second Number  : ";
    cin >> b;
    cout << "Enter the Third Number  : ";
    cin >> c;
    small = (((a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c)));
    cout << "smallest of " << a << "," << b << " and " << c << " is " << small << endl;
    return 0;
}