#include <iostream>
using namespace std;

class a
{
private:
    int i;

public:
    a()
    {
        i = 0;
    }
    void display()
    {
        cout << "Value of i: " << i << " using default constructor" << endl;
    }
};

int main()
{
    a obj;
    obj.display();
    return 0;
}
