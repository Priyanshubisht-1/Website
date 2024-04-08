#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string s;
    char ch;
    int pos;
    cout << "Enter the string : ";
    getline(cin, s);
    cout << "Enter the character which you want to add : ";
    cin >> ch;
    cout << "Enter the Position where you want to add : ";
    cin >> pos;
    s.insert(pos - 1, 1, ch);
    cout << "Resulting string : " << s << endl;
    return 0;
}