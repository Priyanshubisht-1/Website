#include <iostream>
#include<iomanip>
#include <string>
using namespace std;

int main()
{
    int  n,no,i=0,num[]= {1,9,21,20,8,5,100,10,199,98};
    n=sizeof(num)/sizeof(int);
    cout <<"Normal Array : ";
    for(i=0; i<n; i++)
        cout<<num[i]<<" ";
    
    cout<<"\nEnter the Value : ";
    cin>>no;
    for( i=0; i<n; i++)
    {
        if(num[i]==no)
        {
            cout<<no<<" is present in array at "<<i+1<<" position."<<endl;
            break;
        }
    }
    if(i==n)
        cout<<"Element doesn't exist in array."<<endl;
    return 0;
}