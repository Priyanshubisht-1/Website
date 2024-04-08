#include <iostream>
#include <string>
#include <vector>
using namespace std;

string stlongest_repeating_sequence(const string &str)
{
    int n = str.length();
    vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));

    int max_length = 0;
    int end_index = 0;

    for (int i = 1; i <= n; ++i)
    {
        for (int j = i + 1; j <= n; ++j)
        {
            if (str[i - 1] == str[j - 1] && dp[i - 1][j - 1] < (j - i))
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;

                if (dp[i][j] > max_length)
                {
                    max_length = dp[i][j];
                    end_index = i - 1;
                }
            }
            else
            {
                dp[i][j] = 0;
            }
        }
    }

    if (max_length > 0)
    {
        return str.substr(end_index - max_length + 1, max_length);
    }
    else
    {
        return "No repeating sequence found.";
    }
}

int main()
{
    string input_string;
    cout << "Enter a string: ";
    cin >> input_string;
    string longest_sequence = stlongest_repeating_sequence(input_string);
    cout << "Longest repeating sequence: " << longest_sequence << endl;

    return 0;
}
