#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int no, x[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    no = sizeof(x) / sizeof(int);
    cout << "Given Array : ";
    for (int i = 0; i < no; i++)
        cout << x[i] << " ";
    for (int i = 0; i < no / 2; i++)
        swap(x[no - i - 1], x[i]);
    cout << "\nReversed Array : ";
    for (int i = 0; i < no; i++)
        cout << x[i] << " ";
    return 0;
}