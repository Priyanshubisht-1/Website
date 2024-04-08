#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int r, c, m[100][100], t[100][100];
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
            t[j][i] = m[i][j];
        }
    }
    cout << "\n<---- The matrix of " << r << "," << c << " ---->" << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            cout << " " << setw(2) << m[i][j];
        cout << "\n";
    }
    cout << "\n<---- The Transpose of matrix ---->" << endl;
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
            cout << " " << setw(2) << t[i][j];
        cout << "\n";
    }
    return 0;
}