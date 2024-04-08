#include <iostream>
using namespace std;

int main()
{
    int a = 1, rot[10], temp[10], num[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    char con = 'y';
    cout << "\nGiven Array : ";
    for (int i = 0; i < 10; i++)
    {
        cout << num[i] << " ";
        temp[i] = num[i];
    }
    while ((tolower(con)) == 'y')
    {
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                if ((j - a) >= 0)
                    num[j - a] = temp[j];
                else
                    num[10 + (j - a)] = temp[j];
            }
        }
        cout << "\nLeft rotated array : ";
        for (int i = 0; i < 10; i++)
            cout << num[i] << " ";
        cout
            << "\nDo you want to continue ? (y-yes) ";
        cin >> con;
        for (int i = 0; i < 10; i++)
            temp[i] = num[i];
    }
    return 0;
}
