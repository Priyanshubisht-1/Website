#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int r, c, m[100][100];
    int flag = 1;
    cout << "Enter the number of rows : ";
    cin >> r;
    cout << "Enter the number of columns : ";
    cin >> c;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "Enter " << i + 1 << "," << j + 1 << " element : ";
            cin >> m[i][j];
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i == j)
            {
                if (m[i][j] == 1)
                    continue;
                else
                    flag = 0;
            }
            else
            {
                if (m[i][j] == 0)
                    continue;
                else
                    flag = 0;
            }
        }
    }

    if (flag == 0)
        cout << "\nGiven Matrix is not an Identitiy Matrix" << endl;
    else
        cout << "\nGiven Matrix is an Identitiy Matrix" << endl;

    return 0;
}