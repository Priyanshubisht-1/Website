#include <iostream>
using namespace std;
int main()
{
    int d1, d2;
    float area;
    cout << "Enter the length of 1st diagonal  of rohmbus: ";
    cin >> d1;
    cout << "Enter the length of 2nd diagonal  of rohmbus: ";
    cin >> d2;
    area = (0.5 * d1 * d2);
    cout << "Area of Rohmbus is : " << area << endl;
    return 0;
}