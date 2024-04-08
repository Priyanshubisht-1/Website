#include <iostream>
#include <string>
#include <vector>

using namespace std;
void generate_permutations(const string &str, string current_permutation, vector<std::string> &permutations)
{

    if (current_permutation.length() == str.length())
    {
        permutations.push_back(current_permutation);
        return;
    }
    for (int i = 0; i < str.length(); ++i)
    {
        if (current_permutation.find(str[i]) == string::npos)
        {
            generate_permutations(str, current_permutation + str[i], permutations);
        }
    }
}

int main()
{
    string input_string;
    cout << "Enter a string: ";
    cin >> input_string;
    vector<string> permutations;
    generate_permutations(input_string, "", permutations);
    cout << "All permutations of the string:" << endl;
    for (const auto &permutation : permutations)
    {
        cout << permutation << endl;
    }

    return 0;
}
