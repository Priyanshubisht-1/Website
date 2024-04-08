#include <iostream>
using namespace std;

int main()
{
    int l1, l2;
    string s1, s2;
    cout << "Enter the 1st string : ";
    cin >> s1;
    cout << "Enter the 2nd string : ";
    cin >> s2;
    l1 = s1.length();
    l2 = s2.length();
    s1.insert(l1, s2);
    s2.insert(0, s1);
    s1.erase(0, l1);
    s2.erase(l1);
    cout << "String 1 : " << s1 << endl;
    cout << "String 2 : " << s2 << endl;
    return 0;
}