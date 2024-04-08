#include <iostream>
using namespace std;

class Rectangle
{
    int height;
    int width;

public:
    Rectangle()
    {
        height = 0;
        width = 0;
    }

    void get()
    {
        cout << "Height of Rectangle : ";
        cin >> height;
        cout << "Width of Rectangle : ";
        cin >> width;
    }

    void print()
    {
        int Area = height * width;
        int Perimeter = 2 * (height + width);
        cout << "\n<--- Rectangle of height : " << height << " and width : " << width << " --->" << endl;
        cout << "Area of Rectangle : " << Area << endl;
        cout << "Perimeter of Rectangle : " << Perimeter << endl;
    }
};

int main()
{
    Rectangle r1;
    r1.get();
    r1.print();
    return 0;
}