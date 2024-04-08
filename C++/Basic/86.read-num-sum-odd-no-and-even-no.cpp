#include <iostream>
using namespace std;
int main()
{
    int n, num, sumodd = 0, sumeven = 0;
    cout << "Enter the number of terms : ";
    cin >> n;
    cout << "Enter number :" << endl;
    for (int i = 1; i < n; i++)
    {
        cin >> num;
        if (num % 2 == 0)
            sumeven += num;
        else
            sumodd += num;
    }
    cout << "Sum of Odd numbers : " << sumodd << endl;
    cout << "Sum of Even numbers : " << sumeven << endl;
    return 0;
}