#include <iostream>
using namespace std;
int main()
{
    char cs, ce;
    string s;
    cout << "Enter the string : ";
    getline(cin, s);
    cout << "Enter the Starting character: ";
    cin >> cs;
    cout << "Enter the Ending character: ";
    cin >> ce;
    for (int i = 0, j = 0; i < s.length(); i++)
    {
        if (cs == s[i])
        {
            i++;
            j = i;
            while (s[i] != ce)
                i++;
            if (i < s.length())
            {
                cout << "Characters between " << cs << " and " << ce << " : ";
                while (j < i)
                {
                    cout << s[j];
                    j++;
                }
                if (j == i + 1)
                    cout << "None" << endl;
                break;
            }
            else
                cout << "Wrong Input Characters" << endl;
        }
    }
    return 0;
}