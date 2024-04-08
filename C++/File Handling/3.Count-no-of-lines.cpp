#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    char ch;
    int i = 0, words = 0;
    string file;
    ifstream f;
    cout << "Enter the name of file : ";
    cin >> file;
    f.open(file);
    while (!f.eof())
    {
        f.get(ch);
        if ((ch == ' ' || ch == '.') || (ch == '\n'))
            words++;
    }
    cout << "No of words : " << words << endl;
    return 0;
}