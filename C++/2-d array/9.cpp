#include <iostream>
using namespace std;
int main()
{
   int x, y, i, j;
   cout << "Enter the no. of rows : ";
   cin >> x;
   cout << "Enter the no. of columns : ";
   cin >> y;
   int mata[10][10], r[10], c[10];
   for (i = 0; i < x; i++)
   {
      for (j = 0; j < y; j++)
      {
         cout << "Enter the " << i + 1 << " , " << j + 1 << " elements of matrix : ";
         cin >> mata[i][j];
      }
   }
   for (i = 0; i < x; i++)
   {
      r[i] = 0;
      for (j = 0; j < y; j++)
         r[i] = r[i] + mata[i][j];
   }
   for (i = 0; i < y; i++)
   {
      c[i] = 0;
      for (j = 0; j < x; j++)
         c[i] = c[i] + mata[j][i];
   }
   for (i = 0; i < x; i++)
   {
      cout << "Sum Of Row " << i + 1 << ": " << r[i] << endl;
   }
   for (i = 0; i < y; i++)
   {
      cout << "Sum Of Column " << i + 1 << ": " << c[i] << endl;
   }
   return 0;
}