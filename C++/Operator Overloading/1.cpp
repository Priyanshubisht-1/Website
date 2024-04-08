#include <iostream>
using namespace std;
class complex
{
  int imaginary;
  int real;

public:
  complex()
  {
    real = 0;
    imaginary = 0;
  }
  complex(int i, int r)
  {
    real = r;
    imaginary = i;
  }
  complex operator+(complex &c)
  {
    complex temp;
    temp.real = real + c.real;
    temp.imaginary = imaginary + c.imaginary;
  }
  void display()
  {
    cout << real << " + " << imaginary << "i " << endl;
  }
};
int main()
{
  complex c1(10, 3), c2(5, 4), c3;
  cout << "Complex numbers : ";
  c1.display();
  cout << "Complex numbers : ";
  c2.display();
  c3 = c1 + c2;
  cout << "Sum of complex numbers by overloading '+' operator : ";
  c3.display();
  return 0;
}
