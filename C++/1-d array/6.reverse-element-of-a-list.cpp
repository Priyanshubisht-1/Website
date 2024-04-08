#include <iostream>
using namespace std;

int main()
{
    int a, rev[10], num[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << "Given Array   : ";
    for (int i = 0; i < 10; i++)
        cout << num[i] << " ";

    for (int i = 0; i < 10; i++)
        rev[9 - i] = num[i];

    cout << "\nReverse Array : ";
    for (int i = 0; i < 10; i++)
        cout << rev[i] << " ";
    return 0;
}
