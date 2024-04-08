#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    fstream f1, f2;
    string file, data;
    cout << "Enter the name of file : ";
    cin >> file;
    cin.ignore();
    cout << "Enter the data you want to append : ";
    getline(cin, data);
    f1.open(file, ios::app);
    f1 << data << endl;
    f1.close();
}