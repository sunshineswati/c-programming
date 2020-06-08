#include<iostream>
#include<math.h>
using namespace std;
int sum=0;
int main()
{
	int conv_decimal(int,int);
	int n,i,num;
	i=0;
	cout<<"enter no in binary:";
	cin>>n;
	num=conv_decimal(n,i);
	cout<<num;
	return 0;
}
int conv_decimal(int a,int k)
{
	int r,f;
	r=a%10;
	if(a!=0)
	{
		f=r*pow(2,k);
		sum=sum+f;
		return conv_decimal(a/10,k+1);
	}
	else
	{
		return sum;
	}
}
