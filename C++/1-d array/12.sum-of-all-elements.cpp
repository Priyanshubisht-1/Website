#include <iostream>
using namespace std;
int main()
{
    int sum = 0, a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << "Array : ";
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
        sum += a[i];
    }
    cout << "\nSum of all elements : " << sum << endl;
    return 0;
}