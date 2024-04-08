#include <iostream>
using namespace std;

int main()
{
    int num, oct = 0, p = 1;
    cout << "Enter the decimal number : ";
    cin >> num;
    while (num > 0)
    {
        oct = oct + (num % 8) * p;
        num = num / 8;
        p = p * 10;
    }
    cout << "Octal number : " << oct << endl;
}