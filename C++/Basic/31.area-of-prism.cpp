#include <iostream>
using namespace std;
int main()
{
    int b, h, s1, s2, s3;
    float area;
    cout << "Enter the height of Prism : ";
    cin >> h;
    cout << "Enter the 1st side of triangular part of Prism : ";
    cin >> s1;
    cout << "Enter the 2nd side of triangular part of Prism : ";
    cin >> s2;
    cout << "Enter the 3rd side (base) of triangular part of Prism : ";
    cin >> s3;
    cout << "Enter the height of triangular part of Prism : ";
    cin >> b;
    area = ((s1 + s2 + s3) * h + s3 * b);
    cout << "Total Surface Area of Prism is : " << area << endl;
    return 0;
}