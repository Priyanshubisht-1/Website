#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int r, c, m[100][100], zero = 0, non = 0;
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
            if (m[i][j] == 0)
                zero++;
            else
                non++;
        }
    }
    if (zero > non)
        cout << "Given Matrix is an Sparse Matrix. " << endl;
    else
        cout << "Given Matrix is not an Sparse Matrix. " << endl;
    return 0;
}