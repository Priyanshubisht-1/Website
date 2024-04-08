#include <iostream>
#include <string>
using namespace std;

int main()
{
    double num,n;
    cout << "Enter the Double number : ";
    cin>>num;
    n=(int)num;
    if((num-n)==0)
        cout << "The double number "<<num<<" is a integer number." << endl;
    else
        cout << "The double number "<<num<<" is not a integer number." << endl;
    return 0;
}