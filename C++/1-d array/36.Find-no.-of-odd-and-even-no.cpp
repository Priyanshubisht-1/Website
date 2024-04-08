#include <iostream>
using namespace std;

int main()
{
    int n, j1 = 0, k1 = 0, num[] = {1, 9, 21, 2, 20, 8, 5, 100, 10, 199, 98};
    n = sizeof(num) / sizeof(int);
    cout << "Normal Array : ";
    for (int i = 0; i < n; i++)
        cout << num[i] << " ";
    for (int i = 0; i < n; i++)
    {
        if (num[i] % 2 == 0)
            j1++;

        else
            k1++;
    }
    cout << "\nOdd numbers  : " << k1 << endl;
    cout << "Even numbers : " << j1 << endl;
    return 0;
}