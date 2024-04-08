#include <iostream>
using namespace std;
int main()
{
    int num, big = 0, small = 0, zero = 0;
    char a = 'y';
    while ((tolower(a)) == 'y')
    {
        cout << "Enter number : ";
        cin >> num;
        if (big < num)
            big = num;
        else
            small = num;
        cout << "do you want to continue ? ";
        cin >> a;
    }
    cout << "Largest number entered : " << big << endl;
    cout << "Smallest number entered : " << small << endl;
    return 0;
}