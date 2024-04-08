#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float x1, y1, x2, y2, dist;
    cout << "Enter the coordinate of 1st point" << endl
         << "  x = ";
    cin >> x1;
    cout << "  y = ";
    cin >> y1;
    cout << "Enter the coordinate of 2nd point" << endl
         << "  x = ";
    cin >> x2;
    cout << "  y = ";
    cin >> y2;
    dist = pow((pow((y2 - y1), 2) + pow((x2 - x1), 2)), 0.5);
    cout << "Distance between 1st and 2nd pont is " << dist << endl;
    return 0;
}