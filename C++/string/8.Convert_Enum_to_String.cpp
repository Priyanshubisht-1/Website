#include <iostream>
#include <string>
using namespace std;

enum class Day
{
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

string enumToString(Day day)
{
    switch (day)
    {
    case Day::Monday:
        return "Monday";
    case Day::Tuesday:
        return "Tuesday";
    case Day::Wednesday:
        return "Wednesday";
    case Day::Thursday:
        return "Thursday";
    case Day::Friday:
        return "Friday";
    case Day::Saturday:
        return "Saturday";
    case Day::Sunday:
        return "Sunday";
    default:
        return "Unknown";
    }
}

int main()
{
    Day today = Day::Sunday;
    cout << "Today is : " << enumToString(today) << endl;

    return 0;
}
