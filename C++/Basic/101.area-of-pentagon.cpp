#include <iostream>
using namespace std;
int main()
{
    int p, a;
    float area;
    cout << "Enter the Perimeter of Pentagon : ";
    cin >> p;
    cout << "Enter the Apothem of Pentagon : ";
    cin >> a;
    area = (0.5 * p * a);
    cout << "Area of Pentagon is : " << area << endl;
    return 0;
}