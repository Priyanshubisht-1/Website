#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string str, non;
    cout << "Enter the string : ";
    getline(cin, str);
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '<')
        {
            while (str[i] != '>')
                i++;
        }
        else
            non.append(1, str[i]);
    }
    cout << "After Removing Html tags\nFinal String : " << non << endl;
    return 0;
}