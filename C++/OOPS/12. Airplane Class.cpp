#include <iostream>
#include <string>
using namespace std;
class Airplane
{
    int fno;
    string destination;
    int dh, dm;
    int delay;

public:
    Airplane()
    {
        delay = 0;
        dh = 0;
        dm = 0;
    }
    void finfo()
    {
        cout << "Enter Flight No : ";
        cin >> fno;
        cout << "Destination : ";
        cin >> destination;
        cout << "Enter the departure time in (24 hour clock ) (HH MM) ";
        cin >> dh >> dm;
    }
    void fstatus(int a, int b)
    {
        if (a > dh || a == dh && b > dm)
        {
            cout << "Flight departed at " << dh << ":" << dm << " to " << destination << endl;
        }
        else if (delay == 1)
        {
            cout << "Flight is delayed and will arrive at " << dh << ":" << dm << " to " << destination << endl;
        }
        else
        {
            cout << "Flight will arrive at " << dh << ":" << dm << " to " << destination << endl;
        }
    }
    void fdelay()
    {
        cout << "Enter the new departure time in (HH MM) : ";
        cin >> dh >> dm;
        delay = 1;
    }
};
int main()
{
    Airplane f1;
    f1.finfo();
    int ch, cm;
    cout << "Enter the Current time for refrence for flight status in (HH MM)(24 hour clock): ";
    cin >> ch >> cm;
    f1.fstatus(ch, cm);
    f1.fdelay();
    f1.fstatus(ch, cm);
    return 0;
}