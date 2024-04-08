#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    char ch;
    int f_c = 0, n, c = 1, m = 0, flag = 1, count[100], f[100], arr[] = {-4, -3, -2, -1, 0, 1, 2, 2, 3, 4, 5, 6, 7, 8, 9, 9, 2};
    n = sizeof(arr) / sizeof(int);
    cout << "Given Array : ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    for (int i = 0; i < n; i++)
    {
        ch = arr[i];
        for (int j = 0; j < f_c; j++)
        {
            if (ch == f[j])
                flag = 0;
        }
        if (flag != 0)
        {
            f[f_c] = arr[i];
            f_c++;
            for (int k = 0; k < n; k++)
            {
                if (k != i)
                    if (ch == arr[k])
                        c++;
            }
            count[m] = c;
            c = 1;
            m++;
        }
        flag = 1;
    }
    cout << "\n<------ Duplicate values ------>" << endl;
    for (int i = 0; i < f_c; i++)
    {
        if (count[i] > 1)
            cout << "character : " << setw(2) << f[i] << " "
                 << " , with count : " << count[i] << endl;
    }
    return 0;
}
