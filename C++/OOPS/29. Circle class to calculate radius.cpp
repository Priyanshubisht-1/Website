#include <iostream>
using namespace std;

class Circle
{
private:
    double rd;

public:
    void sr(double r)
    {
        rd = r;
    }

    double gr()
    {
        return rd;
    }

    double ar()
    {
        return 3.14 * rd * rd;
    }

    double pr()
    {
        return 2 * 3.14 * rd;
    }
};

int main()
{
    Circle cl;
    cl.sr(7.0);
    cout << "Radius of Circle : " << cl.gr() << endl;
    cout << "Area of Circle : " << cl.ar() << endl;
    cout << "Circumference of Circle : " << cl.pr() << endl;
    return 0;
}
