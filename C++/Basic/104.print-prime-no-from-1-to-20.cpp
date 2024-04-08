#include <iostream>
using namespace std;
int main()
{
    int num, i, j, count = 0, sum = 0;
    cout << "First 20 prime number : " << endl;
    for (i = 2; count < 20; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
                break;
        }
        if (j == i)
        {
            cout << i << " ";
            count++;
        }
    }
    return 0;
}