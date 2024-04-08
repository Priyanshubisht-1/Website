#include <iostream>
#include <string>
#include <vector>

using namespace std;
void generate_subsets(const string &str, int index, string current_subset, vector<string> &subsets)
{
    subsets.push_back(current_subset);
    for (int i = index; i < str.length(); ++i)
    {
        generate_subsets(str, i + 1, current_subset + str[i], subsets);
        generate_subsets(str, i + 1, current_subset, subsets);
    }
}

int main()
{
    string input_string;
    cout << "Enter a string: ";
    cin >> input_string;
    vector<string> subsets;
    generate_subsets(input_string, 0, "", subsets);
    cout << "All subsets of the string:" << endl;
    for (const auto &subset : subsets)
        cout << subset << endl;
    return 0;
}
