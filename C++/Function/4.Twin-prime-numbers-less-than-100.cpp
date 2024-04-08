#include <iostream>
using namespace std;

void prime(int num)
{
    int i, j;
    for (i = 10; i < num; i++)
    {
        for (j = 2; j < i; j++)
            if (i % j == 0)
                break;
        if (j == i)
            cout << j << " ";
    }
}

int main()
{
    cout << "Twin Prime numbers less than 100 are : ";
    prime(100);
    return 0;
}