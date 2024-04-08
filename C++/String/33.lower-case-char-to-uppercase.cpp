#include <iostream>
using namespace std;

int main()
{
    string str, s;
    cout << "Enter the string : ";
    getline(cin, str);
    for (int i = 0; i < str.length(); i++)
    {
        if (isupper(str[i]))
            str[i] = tolower(str[i]);
        else if (islower(str[i]))
            str[i] = toupper(str[i]);
    }
    cout << "Resulting String : " << str << endl;
    return 0;
}