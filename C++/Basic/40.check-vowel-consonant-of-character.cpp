#include <iostream>
#include <ctype.h>
using namespace std;
int main()
{
    char ch;
    cout << " Enter the alphabetic character : ";
    cin >> ch;
    if (!isalpha(ch))
        cout << "Invalid input (Plese input alphabetic character)" << endl;
    else
        switch (tolower(ch))
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout << " The character is a vowel.";
            break;
        default:
            cout << " The character is a consonant.";
        }
    return 0;
}