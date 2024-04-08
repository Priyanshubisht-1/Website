#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string str;
    char words[100][100];
    int m = 0, count[100] = {0};
    cout << "Enter the string : ";
    getline(cin, str);
    for (int i = 0; i < str.length(); i++)
    {
        for (int j = 0; str[i] != ' ' && str[i] != '\0'; i++)
        {
            words[m][j] = str[i];
            count[m]++;
            j++;
        }
        if (str[i + 1] != ' ')
            m++;
    }
    int large_pos = 0, small_pos = 0, large_count = count[0], small_count = count[0];
    for (int i = 0; i < m; i++)
    {
        if (count[i] > large_count)
        {
            large_pos = i;
            large_count = count[i];
        }
        else if (count[i] < small_count)
        {
            small_pos = i;
            small_count = count[i];
        }
    }
    cout << "Largest Word : ";
    for (int j = 0; j < count[large_pos]; j++)
    {
        cout << words[large_pos][j];
    }
    cout << "\nSmallest Word : ";
    for (int j = 0; j < count[small_pos]; j++)
    {
        cout << words[small_pos][j];
    }

    return 0;
}