#include <iostream>
#include<iomanip>
#include <string>
using namespace std;

int main()
{
    int j1=0,k1=0,odd[10],even[10],num[]= {1,9,21,20,8,5,100,10,199,98};
    cout <<"Normal Array : ";
    for(int i=0; i<10; i++)
        cout<<num[i]<<" ";

    for(int i=0; i<10; i++)
    {
        if(num[i]%2==0)
        {
            even[j1]=num[i];
            j1++;
            }
        else
        {
            odd[k1]=num[i];
        k1++;
        }
    }

    cout <<"\nOdd numbers  : ";
    for(int i=0; i<j1; i++)
        cout<<odd[i]<<" ";
        
    cout <<"\nEven numbers : ";
    for(int i=0; i<k1; i++)
        cout<<even[i]<<" ";

    return 0;
}