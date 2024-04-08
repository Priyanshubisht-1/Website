#include <iostream>
using namespace std;

int main()
{
    string s;
    string cha;
    char ch;
    cout << "Enter the string : ";
    getline(cin, s);
    int max, min, max_pos = 0, min_pos = 0, count[100], c = 1, m = 0, flag = 1;
    for (int i = 0; i < s.length(); i++)
    {
        ch = s[i];
        for (int j = 0; j < cha.length(); j++)
        {
            if (ch == cha[j])
                flag = 0;
        }
        if (flag != 0)
        {
            cha.append(1, s[i]);
            for (int k = 0; k < s.length(); k++)
            {
                if (k != i)
                    if (ch == s[k])
                        c++;
            }
            count[m] = c;
            c = 1;
            m++;
        }
        flag = 1;
    }

    max = count[0];
    min = count[0];
    for (int i = 0; i < m; i++)
    {
        if (max < count[i])
            max_pos = i;

        else if (min >= count[i])
            min_pos = i;
    }
    cout << "Maximum occuring character : " << cha[max_pos] << " , with count : " << count[max_pos] << endl;
    cout << "Mininmum occuring character : " << cha[min_pos] << " , with count : " << count[min_pos] << endl;
    // for (int i = 0; i < cha.length(); i++)
    // {
    //     cout << cha[i] << " ";
    // }
    // cout << "\nArray of count : ";
    // for (int i = 0; i < m; i++)
    // {
    //     cout << count[i] << " ";
    // }
    return 0;
}