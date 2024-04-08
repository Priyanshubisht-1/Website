#include <iostream>
using namespace std;

int main()
{
    int arr1[] = {-4, -3, -2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9},
        arr2[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 10, 11, 12, 13, 14};
    cout << "1st array : ";
    for (int i = 0; i < 14; i++)
        cout << arr1[i] << " ";
    cout << "\n2nd array : ";
    for (int i = 0; i < 14; i++)
        cout << arr2[i] << " ";

    cout << "\nCommon Elements : ";
    for (int i = 0; i < 14; i++)
        for (int j = 0; j < 14; j++)
        {
            if (arr1[i] == arr2[j])
                cout << arr1[i] << " ";
            else
                continue;
        }
    return 0;
}