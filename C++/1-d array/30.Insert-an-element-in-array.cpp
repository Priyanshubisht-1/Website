#include <iostream>
#include<iomanip>
#include <string>
using namespace std;

int main()
{
    int  n,pos,no,i=0,num[11]= {1,9,21,20,8,5,100,10,199,98};
    n=sizeof(num)/sizeof(int);
    cout <<"Normal Array : ";
    for(i=0; i<(n-1); i++)
        cout<<num[i]<<" ";

    cout<<"\nEnter the Element  : ";
    cin>>no;
    cout<<"Enter the Position : ";
    cin>>pos;
    if(pos>0 && pos<=n )
    {
        for( i=n-1; i>(pos-1); i--)
            num[i]=num[i-1];
        num[pos-1]=no;

        cout <<"Resulting Array : ";
        for(i=0; i<n; i++)
            cout<<num[i]<<" ";
    }
    else
    {
    cout<<"Invalid position!"<<endl;
    }
    return 0;
}