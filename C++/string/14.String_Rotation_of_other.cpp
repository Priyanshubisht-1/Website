#include <iostream>
#include <string>
using namespace std;

bool is_rotation(const string &str1, const string &str2)
{

    if (str1.length() != str2.length() || str1.empty())
        return false;
    string conc = str1 + str1;
    return conc.find(str2) != string::npos;
}

int main()
{
    string str1, str2;
    cout << "Enter the first string: ";
    cin >> str1;
    cout << "Enter the second string: ";
    cin >> str2;

    if (is_rotation(str1, str2))
        cout << "The second string is a rotation of the first string." << endl;
    else
        cout << "The second string is not a rotation of the first string." << endl;

    return 0;
}
