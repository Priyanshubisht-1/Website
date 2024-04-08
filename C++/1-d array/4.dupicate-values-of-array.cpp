#include <iostream>
using namespace std;

int main()
{
    int t, no, c, n, nom[100], count[100] = {0}, i, j, k, con = 0, arr[100] = {-4, -3, -2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    t = 14;
    cout << "Given Array : ";
    for (i = 0; i < t; i++)
        cout << arr[i] << " ";

    cout << "\nEnter the Number of elements which you want to duplicate : ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << "\nEnter the " << i + 1 << " value which you want to duplicate : ";
        cin >> nom[i];
        cout << "Enter the no of times you want " << nom[i] << " to duplicate : ";
        cin >> count[i];
    }
    for (k = 0; k < n; k++)
    {
        con = con + count[k];
        for (i = 0; i < t; i++)
        {
            c = count[k];
            if (arr[i] == nom[k])
            {
                for (j = (t - 1 + c); j >= i; j--)
                    arr[j] = arr[j - c];
                while (c > 0)
                {
                    arr[i] = nom[k];
                    i++;
                    c--;
                    t++;
                }
                break;
            }
        }
        if (i == t)
        {
            cout << "Invalid input";
            return 0;
        }
    }
    cout << "\nResulting Array : ";
    for (int i = 0; i < t; i++)
        cout << arr[i] << " ";
    return 0;
}