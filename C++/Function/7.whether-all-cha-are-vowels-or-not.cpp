#include <iostream>
using namespace std;

bool vowel(string &str)
{
    for (int i = 0; i < str.length(); i++)
        switch (str[i])
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            break;
        default:
            return false;
        }
    return true;
}

int main()
{
    string s;
    cout << "Enter the String : ";
    cin >> s;
    if (vowel(s))
        cout << "All the character in string are Vowel." << endl;
    else
        cout << "All the character in string are not Vowel." << endl;
    return 0;
}