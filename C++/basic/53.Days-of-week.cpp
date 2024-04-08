#include <iostream>
using namespace std;

int main()
{
    int day;
    cout << "Enter the day of week : ";
    cin >> day;
    switch (day)
    {
    case 1:
        cout << "Day is Sunday." << endl;
        break;
    case 2:
        cout << "Day is Monday." << endl;
        break;
    case 3:
        cout << "Tuesday." << endl;
        break;
    case 4:
        cout << "Wednesday." << endl;
        break;
    case 5:
        cout << "Thursday." << endl;
        break;
    case 6:
        cout << "Friday." << endl;
        break;
    case 7:
        cout << "Saturday." << endl;
        break;
    default:
        cout << "Invalid Input" << endl;
    }
    return 0;
}