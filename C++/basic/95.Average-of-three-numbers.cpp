#include <iostream>
using namespace std;

int main()
{
    int n1, n2, n3;
    float avg;
    cout << "Enter the First Number  : ";
    cin >> n1;
    cout << "Enter the Second Number  : ";
    cin >> n2;
    cout << "Enter the Third Number  : ";
    cin >> n3;
    avg = ((float)((n1 + n2 + n3) / (3)));
    cout << "Average of " << n1 << "," << n2 << " and " << n3 << " is " << avg << endl;
    return 0;
}