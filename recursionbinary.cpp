#include<iostream>
using namespace std;
int main()
{
	int binary(int);
	int n,x;
	cin>>n;
	x=binary(n);
	cout<<x;
	return 0;
}
int binary(int a)
{
	int t,x;
	x=a%2;
	a=a/2;
	if(a!=0)
	{
	t=binary(a);
	cout<<t;
	return x;	
	}
	else
	{
		return x;
	}
}
