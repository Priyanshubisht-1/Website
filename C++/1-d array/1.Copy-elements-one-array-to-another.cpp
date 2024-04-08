#include <iostream>
using namespace std;
int main()
{
    int n = 0, c[10], a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << "Normal Array : ";
    for (int i = 0; i < 10; i++)
        cout << a[i] << " ";

    for (int i = 0; i < 10; i++)
        c[i] = a[i];

    cout << "\nCopied array : ";
    for (int i = 0; i < 10; i++)
        cout << c[i] << " ";
    return 0;
}