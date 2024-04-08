#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
  ifstream f1;
  string ch, n;
  cout << "Enter the name of file : ";
  cin >> n;
  f1.open(n);
  while (!f1.eof())
    getline(f1, ch);

  cout << "Data inside file : " << ch << endl;
  f1.close();
  return 0;
}