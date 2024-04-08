#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
  fstream f1, f2, f3;
  string l[10], st;
  f1.open("hello", ios::in);
  f2.open("rephello", ios::in);
  f3.open("Final", ios::out);
  while (!f1.eof())
  {
    getline(f1, st);
    f3 << st << endl;
  }
  f1.close();
  f3.close();
  f3.open("Final", ios::app);
  while (!f2.eof())
  {
    getline(f2, st);
    f3 << st << endl;
  }
  cout << "Data Merged Succesfully in one file (Final) " << endl;
  f2.close();
  f3.close();
  return 0;
}