#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main()
{
    fstream f1;
    f1.open("hello", ios::in);
    string st, fn;
    int l = 0, c = 0;
    char ch;
    cout << "Enter the string you want to find in file : ";
    getline(cin, fn);
    while (!f1.eof())
    {
        getline(f1, st);
        l++;
        size_t po = st.find(fn);
        if (po != string::npos)
        {
            cout << "String found in line number : " << l;
            c = 1;
            break;
        }
    }
    if (c == 0)
    {
        cout << "NO such string found in file .";
    }
}