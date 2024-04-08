#include <iostream>
using namespace std;

bool check(int n1, int n2, int n3)
{
    int num[3] = {n1, n2, n3};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
            if (num[j] > num[j + 1])
                swap(num[j], num[j + 1]);
    }

    if (num[2] == (num[1] + 1) && num[1] == (num[0] + 1))
        return true;
    else
        return false;
}

int main()
{
    int n1, n2, n3;
    cout << "Enter the 1st number : ";
    cin >> n1;
    cout << "Enter the 2nd number : ";
    cin >> n2;
    cout << "Enter the 3rd number : ";
    cin >> n3;

    if (check(n1, n2, n3))
        cout << n1 << " ," << n2 << " and " << n3 << " are Consecutive." << endl;
    else
        cout << n1 << " ," << n2 << " and " << n3 << " are Not Consecutive." << endl;
    return 0;
}