#include <iostream>
using namespace std;

int main()
{
    int a, right[10], num[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << "\nGiven Array : ";
    for (int i = 0; i < 10; i++)
        cout << num[i] << " ";
    cout << "\nno. of times you want to right rotate : ";
    cin >> a;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (((j + a)) < 10)
                right[j + a] = num[j];
            else
                right[(j + a) - 10] = num[j];
        }
    }

    cout << "Right rotated array : ";
    for (int i = 0; i < 10; i++)
        cout << right[i] << " ";
    return 0;
}
