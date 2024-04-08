#include <iostream>
using namespace std;
int main()
{
    int big, a[10] = {10, 123, 500, 0, 965, -234, 1, -23, 1000, 9};
    big = a[0];
    cout << "Given Array  : ";

    for (int i = 0; i < 10; i++)
        cout << a[i] << " ";

    for (int i = 1; i < 10; i++)
        if (a[i] > big)
            big = a[i];

    cout << "\nLargest element : " << big << endl;
    return 0;
}