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
        for (int k = 0, j = n - 1; k < n && j >= 0; k++, j--)
            words[m][k] = w[j];
        count[m] = n;
        if (count[m] == 0)
            m--;
        m++;
    }

    cout << "<-- Reverse string -->" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < count[i]; j++)
            cout << words[i][j];
        cout << endl;
    }

    return 0;
}