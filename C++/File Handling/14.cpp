#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

void displaycsv(string line, char de)
{
    istringstream iss(line);
    string da;
    while (getline(iss, da, de))
    {
        cout << da << "\t";
    }
    cout << endl;
}

int main()
{
    ifstream f;
    f.open("Data.csv");
    if (!f)
    {
        cerr << "Error opening file.\n";
        return 1;
    }
    string line;
    while (getline(f, line))
    {
        displaycsv(line, ',');
    }

    f.close();

    return 0;
}
