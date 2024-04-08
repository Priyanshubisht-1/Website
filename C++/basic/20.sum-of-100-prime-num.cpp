#include <iostream>
using namespace std;
int main()
{
    int num, i, j, count = 0, sum = 0;
    for (i = 2; count < 100; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
                break;
        }
        if (j == i)
        {
            sum = sum + i;
            count++;
        }
    }
    cout << "Sum of First 100 prime number is " << sum;
    return 0;
}