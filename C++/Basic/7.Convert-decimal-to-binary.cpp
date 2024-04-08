#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int x;
    char bin[10] = {'\0'};
    cout << "Enter decimal number : ";
    cin >> x;
    while (x > 0)
    {
        if (x % 2 == 0)
            strcat(bin, "0");
        else
            strcat(bin, "1");
        x = x / 2;
    }
    strrev(bin);
    cout << "binary number : " << bin << endl;
    return 0;
}