#include <iostream>
using namespace std;
int main()
{
    int count = 0, a[] = {1, 232, 45, 10, 123, 500, 0, 965, -234, 1, -23, 1000, 9, 12};
    cout << "Given Array   : ";
    for (int i = 0; i < (sizeof(a) / sizeof(int)); i++)
        cout << a[i] << " ";
    for (int i = 0; i < (sizeof(a) / sizeof(int)); i++)
        count++;
    cout << "\nNo of element : " << count << endl;
    return 0;
}