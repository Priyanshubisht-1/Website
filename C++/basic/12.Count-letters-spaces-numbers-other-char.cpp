#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string str;
    int spc = 0, let = 0, och = 0, no = 0;
    cout << "Enter the string : ";
    getline(cin, str);
    cout << "Enter the string length : " << str.length() << endl;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
            spc++;
        else if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
            let++;
        else if ((str[i] >= '0' && str[i] <= '9') == 1)
            no++;
        else
            och++;
    }
    cout << "Number of spaces : " << spc << endl;
    cout << "Number of letters : " << let << endl;
    cout << "Number of numbers: " << no << endl;
    cout << "Number of Other character : " << och << endl;

    return 0;
}