#include <iostream>
using namespace std;

int main()
{
    int n, num[] = {1, 9, -1, 0, 8, 5, 100, -10, 199, 98};
    n = sizeof(num) / sizeof(int);
    cout << "Normal Array : ";
    for (int i = 0; i < n; i++)
        cout << num[i] << " ";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (num[j] > num[j + 1])
                swap(num[j], num[j + 1]);
            else
                continue;
        }
    }

    cout << "\nSorted Array : ";
    for (int i = 0; i < n; i++)
        cout << num[i] << " ";

    return 0;
}