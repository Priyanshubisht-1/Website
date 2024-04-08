#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;

int main()
{
    int op;
    char r = 'y';
    while ((tolower(r)) == 'y')
    {
        cout << "\n<-------- CALCULATOR ------->" << endl;
        cout << "Press -> 1 For ADDITION " << endl;
        cout << "Press -> 2 For SUBTRACTION " << endl;
        cout << "Press -> 3 For MULTIPLICATION " << endl;
        cout << "Press -> 4 For DIVISION" << endl;
        cout << "Press -> 5 For EXPONENTIAL " << endl;
        cout << "Press -> 6 For PERCENTAGE " << endl;
        cout << "Press -> 7 For EXIT " << endl;
        cout << "What do you want to do ? ";
        cin >> op;
        switch (op)
        {
        case 1:
            int a, b;
            // clrscr();
            cout << "\nEnter the First number : ";
            cin >> a;
            cout << "Enter the Second number : ";
            cin >> b;
            cout << "\nAddition of " << a << " and " << b << " is " << a + b << endl;
            cout << "\nDo you want to use calculator again ?( y -> yes , n -> no)  ";
            cin >> r;
            break;
        case 2:
            // clrscr();
            cout << "\nEnter the First number : ";
            cin >> a;
            cout << "Enter the Second number : ";
            cin >> b;
            cout << "\nSubtraction of " << b << " from " << a << " is " << a - b << endl;
            cout << "\nDo you want to use calculator again ?(y -> yes , n -> no) ";
            cin >> r;
            break;
        case 3:
            // clrscr();
            cout << "\nEnter the First number : ";
            cin >> a;
            cout << "Enter the Second number : ";
            cin >> b;
            cout << "\nMultiplication of " << a << " and " << b << " is " << a * b << endl;
            cout << "\nDo you want to use calculator again ?(y -> yes , n -> no)  ";
            cin >> r;
            break;
        case 4:
            // clrscr();
            cout << "\nEnter the First number : ";
            cin >> a;
            cout << "Enter the Second number : ";
            cin >> b;
            cout << "\nDivison of " << b << " from " << a << " is " << a / b << endl;
            cout << "\nDo you want to use calculator again ?(y -> yes , n -> no)  ";
            cin >> r;
            break;
        case 5:
            // clrscr();
            cout << "\nEnter the base : ";
            cin >> a;
            cout << "Enter the power: ";
            cin >> b;
            cout << "\nExponential of " << a << " raised to " << b << " is " << pow(a, b) << endl;
            cout << "\nDo you want to use calculator again ?(y -> yes , n -> no)  ";
            cin >> r;
            break;
        case 6:
            // clrscr();
            cout << "Enter the value : ";
            cin >> a;
            cout << "Enter the total value: ";
            cin >> b;
            cout << "\nPercentage of " << a << " raised to " << b << " is " << ((float)a / b * 100) << endl;
            cout << "\nDo you want to use calculator again ?(y -> yes , n -> no)  ";
            cin >> r;
            break;
        case 7:
            // clrscr();
            cout << "\nDo you want to use calculator again ?(y -> yes , n -> no)  ";
            cin >> r;
            break;
        default:
            cout << "\nWrong Input " << endl;
            return 0;
        }
    }
    return 0;
}
