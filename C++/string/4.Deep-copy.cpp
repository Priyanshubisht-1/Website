#include <iostream>
#include <string>
using namespace std;

string deep_copy(const string &input_string)
{
    return input_string;
}

int main()
{
    string original_string = "Merry Christmas!";
    string copied_string = deep_copy(original_string);
    cout << "Original String: " << original_string << endl;
    cout << "Copied String: " << copied_string << endl;
    copied_string += " Have a nice day!";
    cout << "\nModified Copied String: " << copied_string << endl;
    cout << "Original String (unchanged): " << original_string << endl;
    return 0;
}
