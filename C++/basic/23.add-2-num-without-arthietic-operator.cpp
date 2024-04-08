#include <iostream>
using namespace std;
int main()
{
    int x, y, sum;
    cout << "Enter the First number : ";
    cin >> x;
    cout << "Enter the Second number : ";
    cin >> y;
    sum = x;
    for (int i = 0; i != y; i++)
        sum++;
    cout << "Sum of both numbers is : " << sum;
    return 0;
}