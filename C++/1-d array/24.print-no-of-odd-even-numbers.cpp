#include <iostream>
#include<iomanip>
#include <string>
using namespace std;

int main()
{
    int n,odd=0,even=0,num[]= {1,9,21,20,8,5,100,10,199,98};
    n=sizeof(num)/sizeof(int);
    
    cout <<"Normal Array : ";
    for(int i=0; i<n; i++)
        cout<<num[i]<<" ";
    for(int i=0; i<n; i++)
    {
        if(num[i]%2==0)
            even++;
        else
            odd++;
    }
    cout <<"\nNo. of Odd numbers  : "<<odd<<endl;
    cout <<"No. of Even numbers : "<<even<<endl;
    return 0;
}