#include <iostream>
using namespace std;
int main()
{
    int per;
    cout << "Enter the prercentage of student :";
    cin >> per;
    if (per >= 0 && per <= 100)
    {
        if (per > 80)
            cout << "Grade of student is A" << endl;
        else if (per > 60)
            cout << "Grade of student is B" << endl;
        else if (per > 40)
            cout << "Grade of student is C" << endl;
        else
            cout << "Grade of student is D" << endl;
    }
    return 0;
}