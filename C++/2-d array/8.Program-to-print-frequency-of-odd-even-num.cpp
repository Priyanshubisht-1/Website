#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int r, c, m[100][100], odd = 0, even = 0;
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
            if (m[i][j] % 2 == 0)
                even++;
            else
                odd++;
        }
    }
    cout << "Frequency of odd number  : " << odd << endl;
    cout << "Frequency of even number : " << even << endl;
    return 0;
}