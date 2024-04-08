#include <iostream>
using namespace std;
int main()
{
    int num, count = 0;
    cout << "Enter the Positive Number : ";
    cin >> num;
    if (num >= 0)
    {
        while (num != 0)

        {
            count = count + 1;
            num = num / 10;
        }
        cout << "Number of Digits : " << count << endl;
    }
    else
        cout << "Invalid Input" << endl;
    return 0;
}