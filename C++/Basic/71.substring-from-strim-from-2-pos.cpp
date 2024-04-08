#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int x, y, i, j;
    string str, sub;
    cout << "Enter the String : ";
    getline(cin, str);
    cout << "Enter the Starting Position : ";
    cin >> x;
    cout << "Enter the Ending Position : ";
    cin >> y;
    sub.append(str, x - 1, y);
    cout << "Substring : " << sub << endl;
    return 0;
}