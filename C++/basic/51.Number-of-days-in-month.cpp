#include <iostream>
using namespace std;
int main()
{
    int y, m;
    cout << "Enter the Year : ";
    cin >> y;
    cout << "Enter the Month : ";
    cin >> m;
    switch (m)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 9:
    case 11:
        cout << "Number of days : 31 " << endl;
        break;
    case 4:
    case 6:
    case 8:
    case 10:
    case 12:
        cout << "Number of days : 30 " << endl;
        break;
    case 2:
        if ((y % 4 == 0) || (y % 400 == 0))
            cout << "Number of days : 29 " << endl;
        else
            cout << "Number of days : 28 " << endl;
        break;
    default:
        cout << "Invalid Input" << endl;
    }
    return 0;
}