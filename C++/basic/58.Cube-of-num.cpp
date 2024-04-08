#include <iostream>
using namespace std;
int main()
{
    int num, cube = 1;
    cout << "Enter the number : ";
    cin >> num;
    for (int i = 1; i <= 3; i++)
    {
        cube = cube * num;
    }
    cout << "Cube of " << num << " is " << cube << endl;
    return 0;
}
