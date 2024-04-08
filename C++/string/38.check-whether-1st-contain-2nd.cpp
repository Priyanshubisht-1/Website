#include <iostream>
using namespace std;

int main()
{
    int l1, l2, l = 0;
    string s1, s2;
    cout << "Enter the 1st string : ";
    getline(cin, s1);
    cout << "Enter the 2nd string : ";
    cin >> s2;
    for (int i = 0, j = 0; i < s1.length() && j < s2.length(); i++)
    {
        if (s1[i] == s2[j])
        {
            while (s1[i] == s2[j] && s2[j] != '\0')
            {
                i++;
                j++;
                l++;
            }
            if (l < s2.length())
                l = 0;
            else if (l == s2.length())
            {
                cout << "1st String contains 2nd string." << endl;
                return 0;
            }
        }
    }
    cout << "1st String does'nt contains 2nd string." << endl;
    return 0;
}