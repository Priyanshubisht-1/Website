#include <iostream>
using namespace std;
int main()
{
    float n[5], sum = 0, average;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the number " << i + 1 << " : ";
        cin >> n[i];
        sum = sum + n[i];
    }
    average = sum / 5;
    cout << "\nSum of all 5 numbers are " << sum << endl;
    cout << "Average of all 5 numbers are " << average << endl;
    return 0;
}