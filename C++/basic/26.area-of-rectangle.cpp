#include <iostream>
using namespace std;
int main()
{
    int area, l, b;
    cout << "Enter the length of rectangle : ";
    cin >> l;
    cout << "Enter the breadth of rectangle : ";
    cin >> b;
    area = (l * b);
    cout << "Area of rectangle is : " << area << " sq unit" << endl;
    return 0;
}