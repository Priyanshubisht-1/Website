#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number : ";
    cin >> num;
    if (num > 0)
        cout << num << " is Positive." << endl;
    else if (num == 0)
        cout << "Given number is Zero." << endl;
    else
        cout << num << " is Negative." << endl;
    return 0;
}