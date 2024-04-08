#include <iostream>
using namespace std;
int main()
{
    int num, pos = 0, neg = 0, zero = 0;
    char a = 'y';
    while ((tolower(a)) == 'y')
    {
        cout << "Enter number : ";
        cin >> num;
        if (num > 0)
            pos++;
        else if (num < 0)
            neg++;
        else
            zero++;
        cout << "do you want to continue ? ";
        cin >> a;
    }
    cout << "Number of Positive numbers : " << pos << endl;
    cout << "Number of Negative numbers : " << neg << endl;
    cout << "Number of zeroes : " << zero << endl;
    return 0;
}