#include <iostream>
using namespace std;

void middles(string &s)
{
    int l = (s.length());
    if ((l % 2) != 0)
        cout << "Middle character : " << s[(l / 2)] << endl;
    else
        cout << "Middle character : " << s[(l / 2)] << " and " << s[(l / 2) + 1] << endl;
}

int main()
{
    string str;
    cout << "Enter the String : ";
    cin >> str;
    middles(str);
    return 0;
}