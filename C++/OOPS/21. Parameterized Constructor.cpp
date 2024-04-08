#include <iostream>
#include <string>
using namespace std;

class a
{
private:
    int i;

public:
    a(int num)
    {
        i = num;
    }
    void display()
    {
        cout << "Value of i: " << i << " using parameterized constructor" << endl;
    }
};

int main()
{
    a obj(4);
    obj.display();
    return 0;
}
