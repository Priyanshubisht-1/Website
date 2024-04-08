#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string str;
    int vow = 0, cons = 0;
    cout << "Enter the string : ";
    getline(cin, str);
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
            switch (tolower(str[i]))
            {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                vow++;
                break;
            default:
                cons++;
            }
        else
            continue;
    }
    cout << "Number of Vowels in string : " << vow << endl;
    cout << "Number of Consonants in string : " << cons << endl;
    return 0;
}