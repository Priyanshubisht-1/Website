#include <iostream>
using namespace std;

int main()
{
    string str;
    char sub[100][100];
    int m = 0, no, len, last;
    cout << "Enter the string : ";
    cin >> str;
    cout << "Enter the number of substring into which you want to split  : ";
    cin >> no;

    len = ((str.length()) / no);
    int count[no];
    last = str.length() - (len * no);

    cout << "parts : " << len << " last : " << last << endl;
    for (int i = 0; i < no; i++)
        count[i] = len;

    for (int i = no - 1; last > 0; i--, last--)
        count[i] = len + 1;

    for (int i = 0; i < str.length(); i++)
    {
        for (int j = 0; j < count[m]; i++, j++)
            sub[m][j] = str[i];
        i = i - 1;
        m++;
    }

    cout << "<--- Sub string --->" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < count[i]; j++)
            cout << sub[i][j];
        cout << endl;
    }

    return 0;
}