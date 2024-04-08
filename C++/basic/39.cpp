#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0, marks = 0;
    ;
    cout << "Enter the no. of subjects : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the marks in " << i + 1 << " subjects : ";
        cin >> marks;
        sum = sum + marks;
    }
    cout << "Average marks : " << (float)sum / n;
    return 0;
}