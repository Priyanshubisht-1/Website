#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
  ifstream f1;
  string n;
  char ch;
  int c = 0;
  cout << "Enter the name of file : ";
  cin >> n;
  f1.open(n);
  while (!f1.eof())
  {
    f1.get(ch);
    if (ch == '\n' || ch == '.')
      c++;
  }
  cout << "No of lines in file : " << c + 1 << endl;
  f1.close();
  return 0;
}