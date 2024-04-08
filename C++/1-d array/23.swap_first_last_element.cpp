#include <iostream>
#include<iomanip>
#include <string>
using namespace std;

int main()
{
    int n,num[]= {1,9,21,20,8,5,100,10,199,98};
    n=sizeof(num)/sizeof(int);
    cout <<"Normal Array : ";
    for(int i=0; i<n; i++)
        cout<<num[i]<<" ";
    swap(num[0],num[n-1]);
    cout <<"\nResulting Array : ";
    for(int i=0; i<n; i++)
        cout<<num[i]<<" ";
        
    return 0;
}