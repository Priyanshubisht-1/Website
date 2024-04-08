#include <iostream>
using namespace std;

int main()
{
    int a, left[10], num[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    cout << "\nGiven Array : ";
    for (int i = 0; i < 10; i++)
        cout << num[i] << " ";
    cout << "\nno. of times you want to left rotate : ";
    cin >> a;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if ((j - a) >= 0)
                left[j - a] = num[j];
            else
                left[10 + (j - a)] = num[j];
        }
    }

    cout << "Left rotated array : ";
    for (int i = 0; i < 10; i++)
        cout << left[i] << " ";
    return 0;
}
