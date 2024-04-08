#include <iostream>
using namespace std;

int main()
{
    int i, j, k, n, count, arr[] = {-4, -3, -2, -1, 0, 1, 2, 2, 3, 4, 5, 6, 7, 8, 9, 9};
    n = sizeof(arr) / sizeof(int);
    cout << "Given Array : ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    for (int i = 0; i < n; i++)
    {
        count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == arr[i])
            {
                count++;
                if (count > 1)
                {
                    for (int k = i; k < n; k++)
                    {
                        arr[k] = arr[k + 1];
                    }
                    n--;
                }
            }
            else
                continue;
        }
    }
    cout << "\nResulting Array : ";
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}