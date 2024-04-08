#include <iostream>
using namespace std;
int main()
{
    int n, count = 1, sum = 0;
    cout << "Enter the number of terms : ";
    cin >> n;
    cout << "\nNumbers upto " << n << " number" << endl;
    for (int i = 1; count <= n; i = i + 2)
    {
        cout << i << " ";
        sum = sum + i;
        count++;
    }
    cout << "\nSum of first " << n << " term is " << sum << endl;
    return 0;
}
