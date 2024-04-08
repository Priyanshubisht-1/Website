#include <iostream>
using namespace std;

int main()
{
    string str, w, rev;
    char words[100][100];
    int m = 0, n = 0, count[100] = {0};
    cout << "Enter the string : ";
    getline(cin, str);
    for (int i = 0; i < str.length(); i++)
    {
        w.clear();
        rev.clear();
        n = 0;
        while (str[i] != ' ' && str[i] != '\0')
        {
            w += str[i];
            n++;
            i++;
        }
        for (int j = n - 1; j >= 0; j--)
            rev += w[j];
        if (rev == w)
        {
            for (int k = 0; k < n; k++)
                words[m][k] = w[k];
            count[m] = n;
            m++;
        }
    }

    cout << "<-- Palindrome words -->" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < count[i]; j++)
            cout << words[i][j];
        cout << endl;
    }

    return 0;
}