#include <iostream>
using namespace std;

int main()
{
    int num, bin = 0, p = 1;
    cout << "Enter the decimal number : ";
    cin >> num;
    while (num > 0)
    {
        bin = bin + (num % 2) * p;
        num = num / 2;
        p = p * 10;
    }
    cout << "Binary number : " << bin << endl;
}