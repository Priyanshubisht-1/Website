#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main()
{
    /*Decryption algorithm :- shifting character by 7 ascii numbers to the left */
    fstream f1, f2;
    f1.open("enc_file", ios::in);
    f2.open("hello", ios::out);
    char ch;
    while (f1.get(ch))
    {
        if (ch == '\n' || ch == ' ')
        {
            f2 << ch;
        }
        else
        {
            ch = ch - 7;
            f2 << ch;
        }
    }
    cout << "File Decrypted Successfully" << endl;
    f1.close();
    f2.close();
}