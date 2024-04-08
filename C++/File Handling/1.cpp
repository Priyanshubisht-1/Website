#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    ofstream f1;
    string ch, n;
    cout << "Enter the name of file : ";
    cin >> n;
    f1.open(n);
    cin.ignore();
    cout << "Enter the data of file : ";
    getline(cin, ch);
    f1 << ch;
    f1.close();
    return 0;
}