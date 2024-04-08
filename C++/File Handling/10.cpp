#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
    fstream f1, f2[10];
    string st = "";
    char ch;
    int tc = 0;
    f1.open("hello", ios::in);
    while (!f1.eof())
    {
        f1.get(ch);
        tc++;
    }
    double ps = sqrt(tc);
    int ips = ps;
    int i = 0;
    f1.clear();
    f1.seekp(0, ios::beg);
    while (!f1.eof())
    {
        if (i == ips)
            break;
        string on = "Output" + to_string(i + 1);
        f2[i].open(on, ios::out);
        for (int j = 0; j < ips; j++)
        {
            f1.get(ch);
            f2[i].put(ch);
        }
        f2[i].close();
        i++;
    }
    cout << "File is divided into " << ips << " parts" << endl;
    f1.close();
    return 0;
}