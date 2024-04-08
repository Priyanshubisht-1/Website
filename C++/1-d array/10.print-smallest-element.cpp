#include <iostream>
using namespace std;
int main()
{
    int small, a[10] = {10, 123, 500, 0, 965, -234, 1, -23, 1000, 9};
    small = a[0];
    cout << "Given Array  : ";
    for (int i = 0; i < 10; i++)
        cout << a[i] << " ";
    for (int i = 1; i < 10; i++)
        if (a[i] < small)
            small = a[i];
    cout << "\nSmallest element : " << small << endl;
    return 0;
}