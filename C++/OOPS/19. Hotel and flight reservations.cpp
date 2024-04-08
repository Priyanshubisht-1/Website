#include <iostream>
#include <string>

using namespace std;

class ReservationSystem
{
private:
    string fly;
    string hot;
    bool flyBkd;
    bool hotBkd;

public:
    ReservationSystem()
    {
        flyBkd = false;
        hotBkd = false;
    }
    void srcFly(string dst, string dt)
    {
        cout << "Searching for flights to " << dst << " on " << dt << endl;
        fly = " Flight 1";
    }

    void srcHot(string loc, string dt)
    {
        cout << "Searching for hotels in " << loc << " on " << dt << endl;
        hot = "Hotel 1";
    }

    void bkFly()
    {
        if (!flyBkd)
        {
            cout << "Booking flight: " << fly << endl;
            flyBkd = true;
        }
        else
        {
            cout << "Flight already booked." << endl;
        }
    }

    void bkHot()
    {
        if (!hotBkd)
        {
            cout << "Booking hotel: " << hot << endl;
            hotBkd = true;
        }
        else
        {
            cout << "Hotel already booked." << endl;
        }
    }

    void cnlFly()
    {
        if (flyBkd)
        {
            cout << "Canceling flight reservation." << endl;
            flyBkd = false;
        }
        else
        {
            cout << "No flight reservation to cancel." << endl;
        }
    }

    void cnlHot()
    {
        if (hotBkd)
        {
            cout << "Canceling hotel reservation." << endl;
            hotBkd = false;
        }
        else
        {
            cout << "No hotel reservation to cancel." << endl;
        }
    }
};

int main()
{
    ReservationSystem sys;
    sys.srcFly("New Delhi", "2024-05-15");
    sys.bkFly();
    sys.bkFly();
    sys.cnlFly();
    sys.cnlFly();
    sys.srcHot("Mumbai", "2024-06-20");
    sys.bkHot();
    sys.bkHot();
    sys.cnlHot();
    sys.cnlHot();

    return 0;
}
