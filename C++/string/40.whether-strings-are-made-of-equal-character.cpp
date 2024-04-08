#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
bool are_same_characters(const string &str1, const string &str2)
{
    if (str1.length() != str2.length())
        return false;
    unordered_map<char, int> char_count;
    for (char c : str1)
        char_count[c]++;
    for (char c : str2)
    {
        if (char_count.find(c) == char_count.end() || char_count[c] == 0)
            return false;
        char_count[c]--;
    }
    return true;
}

int main()
{
    string str1, str2;
    cout << "Enter the first string: ";
    getline(cin, str1);
    cout << "Enter the second string: ";
    getline(cin, str2);
    if (are_same_characters(str1, str2))
        cout << "The two strings are created with the same characters." << endl;
    else
        cout << "The two strings are not created with the same characters." << endl;
    return 0;
}
