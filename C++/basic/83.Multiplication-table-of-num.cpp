#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the Number : ";
    cin >> num;
    cout << "<---- Multiplication Table of number " << num << " ---->" << endl;
    for (int i = 1; i <= 10; i++)
        cout << "\t\t " << num << " X " << i << " = " << num * i << endl;
    return 0;
}