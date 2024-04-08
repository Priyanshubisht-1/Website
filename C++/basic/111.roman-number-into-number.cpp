#include <iostream>
using namespace std;
int main()
{
    string num;
    int sum = 0, n;
    cout << "Enter the Roman number : ";
    cin >> num;
    n = num.length();
    for (int i = 0; i < n; i++)
    {
        num[i] = toupper(num[i]);
        if (num[i] == 'I')
        {
            if (i + 1 < n && num[i + 1] == 'V')
            {
                sum += 4;
                i = i + 2;
            }
            else if (i + 1 < n && num[i + 1] == 'X')
            {
                sum += 9;
                i = i + 2;
            }
            else
                sum += 1;
        }
        else if (num[i] == 'V')
            sum += 5;
        else if (num[i] == 'X')
            sum += 10;
    }
    cout << "Number : " << sum;
    return 0;
}