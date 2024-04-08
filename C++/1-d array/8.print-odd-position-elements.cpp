#include <iostream>
using namespace std;
int main()
{
    int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << "Given Array  : ";
    for (int i = 0; i < 10; i++)
        cout << a[i] << " ";
    cout << "\nOdd elements : ";
    for (int i = 1; i < 10; i = i + 2)
        cout << a[i] << " ";
    return 0;
}