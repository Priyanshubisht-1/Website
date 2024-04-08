#include <iostream>
using namespace std;
class Rectangle
{
  int length;
  int width;

public:
  Rectangle(int a, int b)
  {
    length = a;
    width = b;
  }
  int operator==(Rectangle &r)
  {
    if (length == r.length && width == r.width)
    {
      return true;
    }
    else
    {
      return false;
    }
  }
  void display()
  {
    cout << "Width : " << width << " and Length : " << length << endl;
  }
};
int main()
{
  Rectangle r1(20, 15), r2(12, 9);
  cout << "1st Rectangle of ";
  r1.display();
  cout << "2nd Rectangle of ";
  r2.display();
  cout << "Comparison of rectangles by overloading '==' operator (1:True 0:False) : " << (r1 == r2);
  return 0;
}
