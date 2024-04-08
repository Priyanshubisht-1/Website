#include <iostream>
using namespace std;
class MyClass
{
private:
    int i;

public:
    MyClass()
    {
        i = 0;
    }
    MyClass(MyClass &other)
    {
        i = other.i;
        cout << "Copy constructor called" << endl;
    }
    void display()
    {
        cout << "Value of i of object using copy constructor : " << i;
    }
};

int main()
{
    MyClass ob1, ob2(ob1);
    ob2.display();
    return 0;
}
