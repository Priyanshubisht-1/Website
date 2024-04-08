#include <iostream>
using namespace std;

int main()
{
    int pos;
    string str, i;
    cout << "Enter the string : ";
    getline(cin, str);
    cout << "Enter the string which you want to insert : ";
    getline(cin, i);
    cout << "Enter the position where you want to insert : ";
    cin >> pos;
    str.insert(pos - 1, i);
    cout << "Resulting String : " << str << endl;
}