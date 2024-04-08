#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main()
{
    /*Encryption algorithm :- shifting character by 3 ascii numbers to the right */
    string file;
    fstream f1, f2;
    cout << "Enter the name of file : ";
    cin >> file;
    f1.open(file, ios::in);
    f2.open("enc_file", ios::out);
    char ch;
    while (f1.get(ch))
    {
        if (isalpha(ch))
        {
            ch = ch + 3;
            f2 << ch;
        }
        else
            f2 << ch;
    }
    cout << " File Encrypted succesfully. ";
    f1.close();
    f2.close();
    return 0;
}