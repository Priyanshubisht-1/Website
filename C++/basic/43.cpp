//43. C++ Program to calculate electricity bill
#include<iostream>
using namespace std;

int main()
{
	int p,uc,ou,nu,puc;
	float tax,bill;
	cout<<"Enter Old Unit : ";
	cin>>ou;
	cout<<"Enter New Unit : ";
	cin>>nu;
	cout<<"Enter Per Unit Charge : ";
	cin>>puc;
	uc=nu-ou;
	p=uc*puc;
	tax=(float)((p*12)/100);
	bill=p+tax;
	cout<<endl<<"Total Bill : "<<bill;
}

/*
Enter Old Unit : 225
Enter New Unit : 350
Enter Per Unit Charge : 8

Total Bill : 1120
*/
