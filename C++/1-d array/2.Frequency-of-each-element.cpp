#include <iostream>
using namespace std;

int main()
{
    int a, num[] = {0, 1, 2, 2, 2, 3, 5, 7, 8, 8, 9, 9, 9, 9, 0};
    int count[10] = {0};

    cout << "\nArray: ";
    for (int i = 0; i < 15; i++)
        cout << num[i] << " ";

    for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 10; j++)
            if (j == num[i])
                count[j]++;
    }

    cout << "\n<---- Frequency ---->" << endl;
    for (int i = 0; i < 10; i++)
        cout << i << " is " << count[i] << endl;
    return 0;
}
