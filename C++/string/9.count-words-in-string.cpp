#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string str;
    int words = 1, c = 0;
    cout << "Enter the string : ";
    getline(cin, str);

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
            for (int j = i; str[i] == ' ' && str[i + 1] != '\0'; i++)
            {
                if (c < 1)
                    words++;
                c++;
            }
        c = 0;
    }
    cout << "Number of words in string : " << words << endl;
    return 0;
}