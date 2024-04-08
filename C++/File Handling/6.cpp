#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    fstream f1, f2;
    string c, f, r;
    f1.open("hello", ios::in);
    f2.open("rephello", ios::out);
    cout << "Enter the word with whom you want to replace : ";
    cin >> f;
    cout << "Enter the word to replace with : ";
    cin >> r;
    while (!f1.eof())
    {
        f1 >> c;
        if (c == f)
            f2 << r << " ";
        else
            f2 << c << " ";
    }
    f1.close();
    f2.close();
    f1.open("hello", ios::out);
    f2.open("rephello", ios::in);
    while (!f2.eof())
    {
        getline(f2, c);
        f1 << c;
    }
    cout << "Word Replaced Succesfully" << endl;
    f1.close();
    f2.close();
    return 0;
}