#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    cout << "<-- Table of number " << n << " -->" << endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << "\t" << n << " X " << i << " = " << n * i << endl;
    }
    return 0;
}
