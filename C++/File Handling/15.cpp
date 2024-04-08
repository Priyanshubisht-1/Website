#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
  ifstream f;
  f.open("hello");
  int n, s = 0, c = 0;
  while (!f.eof())
  {
    f >> n;
    s = s + n;
    c++;
  }
  cout << "Average of no. stored in file : " << (float)s / c;
  f.close();
  return 0;
}
