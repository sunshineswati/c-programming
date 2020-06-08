#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n=20,i,fact=1;
	float sum=0,x;
	cout<<"enter the value of x :";
	cin>>x;
	x=x*3.14/180;
	/*cout<<"\n enter the value of n";
	cin>>n;*/
	for(i=2;i<=n;i++)
	{
		fact=fact*i;
		sum=sum+(-1*(pow(-x,i)/fact));
	}
	cout<<"\ncos(x)="<<sum+1;
	return 0;
}
