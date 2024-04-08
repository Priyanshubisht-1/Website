#include <iostream>
using namespace std;

float average(int a, int b, int c)
{
    float result;
    result = ((float)(a + b + c) / 3);
    return result;
}

int main()
{
    int n1, n2, n3;
    float avg;
    cout << "Enter the 1 number : ";
    cin >> n1;
    cout << "Enter the 2 number : ";
    cin >> n2;
    cout << "Enter the 3 number : ";
    cin >> n3;
    avg = average(n1, n2, n3);
    cout << "Average of " << n1 << " , " << n2 << " and " << n3 << " is : " << avg << endl;
}