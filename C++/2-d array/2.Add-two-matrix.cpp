#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int r, c, m1[100][100], m2[100][100], sum[100][100] = {0};
    cout << "Enter the number of rows : ";
    cin >> r;
    cout << "Enter the number of columns : ";
    cin >> c;
    cout << "\n<---- The 1st matrix of " << r << "," << c << " ---->" << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "Enter " << i + 1 << "," << j + 1 << " element : ";
            cin >> m1[i][j];
            sum[i][j] += m1[i][j];
        }
    }
    cout << "\n<---- The 2nd matrix of " << r << "," << c << " ---->" << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "Enter " << i + 1 << "," << j + 1 << " element : ";
            cin >> m2[i][j];
            sum[i][j] += m2[i][j];
        }
    }
    cout << "\n<---- The Sum of both matrix ---->" << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            cout << " " << setw(2) << sum[i][j];
        cout << "\n";
    }

    return 0;
}