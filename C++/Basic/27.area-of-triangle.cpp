#include <iostream>
using namespace std;
int main()
{
    int b, h;
    float area;
    cout << "Enter the base of triangle : ";
    cin >> b;
    cout << "Enter the height of triangle : ";
    cin >> h;
    area = (0.5 * b * h);
    cout << "Area of triangle is : " << area << endl;
    return 0;
}