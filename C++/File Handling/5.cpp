#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    ifstream f1;
    ofstream f2;
    string ch, file1, file2;
    cout << "Enter the name of file : ";
    cin >> file1;
    cout << "Enter the name of file in which you want to copy  : ";
    cin >> file2;
    f1.open(file1);
    f2.open(file2);
    while (!f1.eof())
    {
        getline(f1, ch);
        f2 << ch;
    }
    cout << "file copied ." << endl;
    f1.close();
    f2.close();
    return 0;
}