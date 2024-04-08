#include <iostream>
#include <string>
#include <unordered_map>
#include <sstream>
#include <vector>

using namespace std;
void find_duplicate_words(const string &str)
{
    unordered_map<string, int> frequency_map;
    stringstream ss(str);
    string word;
    while (ss >> word)
    {
        frequency_map[word]++;
    }
    bool found_duplicates = false;
    for (const auto &pair : frequency_map)
    {
        if (pair.second > 1)
        {
            cout << pair.first << " ";
            found_duplicates = true;
        }
    }
    if (!found_duplicates)
    {
        cout << "No duplicate words found.";
    }

    cout << endl;
}

int main()
{
    string input_string;
    cout << "Enter a string: ";
    getline(cin, input_string);
    cout << "Duplicate words in the string: ";
    find_duplicate_words(input_string);

    return 0;
}
