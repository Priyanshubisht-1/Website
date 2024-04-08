#include <iostream>
using namespace std;
int main()
{
    int num, i;
    cout << "Enter number : ";
    cin >> num;
    if (num == 1)
        cout << num << " is not a prime number" << endl;
    else if (num >= 2)
        for (i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                cout << num << " is not a prime number" << endl;
                break;
            }
            else
                continue;
        }
    else
        cout << "Invalid Input" << endl;
    if (i == num)
        cout << num << " is a prime number" << endl;
    return 0;
}