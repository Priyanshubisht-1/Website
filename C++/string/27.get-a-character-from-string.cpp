#include <iostream>
using namespace std;

int main()
{
    char ch;
    string str;
    int pos;
    cout << "Enter the String : ";
    getline(cin, str);
    cout << "Enter the Position to get character : ";
    cin >> pos;
    ch = str[pos - 1];
    cout << "Character at " << pos << " is " << ch << endl;
    return 0;
}
