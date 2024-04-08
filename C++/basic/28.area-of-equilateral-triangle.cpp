#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float area, s;
    const float pi = 3.14;
    cout << "Enter the side of equilateral triangle : ";
    cin >> s;
    area = (((float)sqrt(3) / 4) * s * s);
    cout << "Area of equilateral triangle is : " << area << endl;
    return 0;
}