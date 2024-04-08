#include <iostream>
#include<iomanip>
#include <string>
using namespace std;

int main()
{
    int  n,sum=0,num[]= {1,9,21,20,8,5,100,10,199,98};
    float avg;
    n=sizeof(num)/sizeof(int);
    cout <<"Normal Array : ";
    for(int i=0; i<n; i++)
    {
        cout<<num[i]<<" ";
        sum=sum+num[i];
    }
    avg=(float)sum/n;
        cout<<"\nAverage of all elements in array : "<<avg<<endl;
    return 0;
}