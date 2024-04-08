#include <iostream>
#include<iomanip>
#include <string>
using namespace std;

int main()
{
    int temp,num[]= {1,9,-1,0,8,5,100,-10,199,98};
    cout <<"Normal Array : ";
    for(int i=0; i<(sizeof(num)/sizeof(int)); i++)
        cout<<num[i]<<" ";

    for(int i=0; i<(sizeof(num)/sizeof(int)); i++)
    {
        for(int j=0; j<(sizeof(num)/sizeof(int)); j++)
        {
            if(num[j]<num[j+1])
            {
                temp=num[j+1];
                num[j+1]=num[j];
                num[j]=temp;
            }
            else
                continue;
        }
    }
    
    cout <<"\n2nd largest number in array is "<<num[1]<<endl;

    return 0;
}