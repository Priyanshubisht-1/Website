#include <iostream>
using namespace std;

int count(int num)
{
    int two = 0;
    for (int i = 0; num > 0; i++, num /= 10)
        if (num % 10 == 2)
            two++;
    return two;
}
int main()
{
    int num, twos;
    cout << "Enter the number : ";
    cin >> num;
    twos = count(num);
    cout << "No. of digits in " << num << " with value 2 : " << twos << endl;
    return 0;
}