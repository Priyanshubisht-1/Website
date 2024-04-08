#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout << "Enter 1st number : ";
    cin >> x;
    cout << "Enter 2nd number : ";
    cin >> y;
    if (x > y)
        cout << "\n"
             << x << " is greater than " << y << endl;
    else if (x == y)
        cout << "\n"
             << "Both numbers are equal " << endl;
    else
        cout << "\n"
             << y << " is greater than " << x << endl;
    return 0;
}