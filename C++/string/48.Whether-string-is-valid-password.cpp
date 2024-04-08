#include <iostream>
using namespace std;

int main()
{
    int l = 0, u = 0, sp = 0, n = 0;
    string s;
    cout << "Enter the string : ";
    cin >> s;
    if (s.length() < 8)
        cout << s << " is not a valid password" << endl;
    else
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (isupper(s[i]))
                u++;
            else if (islower(s[i]))
                l++;
            else if (ispunct(s[i]))
                sp++;
            else if (isdigit(s[i]))
                n++;
            else
                cout << s << " is not a valid password" << endl;
        }
        if ((u > 0 && l > 0) && (n > 0 && sp > 0))
            cout << s << " is a valid password" << endl;
        else
            cout << s << " is not a valid password" << endl;
    }
    return 0;
}