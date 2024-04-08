#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;

int main()
{
    int a, note[10] = {2000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    int count[10] = {0};
    char r = 'y';
    cout << "\nEnter the Amount : ";
    cin >> a;

    for (int i = 0; i < 10; i++)
    {
        while (a >= note[i])
        {
            a = a - note[i];
            count[i]++;
        }
    }
    cout << "<---- Total no. of Notes---->" << endl;
    for (int i = 0; i < 10; i++)
    {
        if (count[i] > 0)
            cout << "RS " << note[i] << " notes : " << count[i] << endl;
        else
            continue;
    }
    return 0;
}
