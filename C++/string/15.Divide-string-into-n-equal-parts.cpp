#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> divide_string(const string &str, int parts)
{
    vector<string> divided;
    int length = str.length();
    int part_size = length / parts;
    int extra = length % parts;
    int start = 0;
    int end = 0;

    for (int i = 0; i < parts; ++i)
    {
        if (extra > 0)
        {
            end = start + part_size + 1;
            extra--;
        }
        else
        {
            end = start + part_size;
        }

        divided.push_back(str.substr(start, end - start));
        start = end;
    }

    return divided;
}

int main()
{
    string input_string;
    int parts;
    cout << "Enter a string : ";
    getline(cin, input_string);
    cout << "Enter the number of parts to divide the string into : ";
    cin >> parts;
    vector<string> divided = divide_string(input_string, parts);
    cout << "The string divided into " << parts << " equal parts:" << endl;
    for (const auto &part : divided)
        cout << part << std::endl;

    return 0;
}
