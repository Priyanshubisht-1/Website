#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int r1, c1, r2, c2, m1[100][100], m2[100][100], re[100][100] = {0};
    cout << "Enter the number of rows of 1st matrix : ";
    cin >> r1;
    cout << "Enter the number of columns of 1st matrix : ";
    cin >> c1;
    cout << "Enter the number of rows of 1st matrix : ";
    cin >> r2;
    cout << "Enter the number of columns of 1st matrix : ";
    cin >> c2;
    cout << "\n<---- The 1st matrix of " << r1 << "," << c1 << " ---->" << endl;
    if (c1 == r2)
    {
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                cout << "Enter " << i + 1 << "," << j + 1 << " element : ";
                cin >> m1[i][j];
            }
        }

        cout << "\n<---- The 2nd matrix of " << r2 << "," << c2 << " ---->" << endl;
        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                cout << "Enter " << i + 1 << "," << j + 1 << " element : ";
                cin >> m2[i][j];
            }
        }

        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                for (int k = 0; k < c1; k++)
                    re[i][j] += (m1[i][k] * m2[k][j]);
            }
        }

        cout << "\n<---- The Sum of both matrix ---->" << endl;
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
                cout << " " << setw(2) << re[i][j];
            cout << "\n";
        }
    }
    else
        cout << "Multiplication Not possible." << endl;
    return 0;
}