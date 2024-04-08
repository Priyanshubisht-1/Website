#include <iostream>
#include <string>
using namespace std;
class TrafficLight
{
    string color;
    int duration;

public:
    TrafficLight()
    {
        color = "Red";
        duration = 1;
    }
    void setcolor()
    {
        int c;
        cout << "Enter number 1.Red 2.Green : ";
        cin >> c;
        if (c == 1 || c == 2)
        {
            if (c == 1)
            {
                color = "Red";
            }
            else
            {
                color = "Green";
            }
        }
        else
        {
            cout << "Not a valid color ." << endl;
        }
    }
    void setduration()
    {
        cout << "Enter duration in sec : ";
        cin >> duration;
    }
    void checkcolor(int n)
    {
        if (color == "Red")
        {
            if (n % duration == 0)
            {
                if ((n / duration) % 2 == 1)
                {
                    cout << "Red";
                }
                else
                {
                    cout << "Green";
                }
            }
            else
            {
                if ((n / duration) % 2 == 1)
                {
                    cout << "Green";
                }
                else
                {
                    cout << "Red";
                }
            }
        }
        else
        {
            if (n % duration == 0)
            {
                if ((n / duration) % 2 == 1)
                {
                    cout << "Green";
                }
                else
                {
                    cout << "Red";
                }
            }
            else
            {
                if ((n / duration) % 2 == 1)
                {
                    cout << "Red";
                }
                else
                {
                    cout << "Green";
                }
            }
        }
    }
};
int main()
{
    TrafficLight l1;
    l1.setcolor();
    l1.setduration();
    int t;
    cout << "Enter the time in seconds to check color after that duration : ";
    cin >> t;
    l1.checkcolor(t);
    return 0;
}