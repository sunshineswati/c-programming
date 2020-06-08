#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,l;
	cout<<"enter the no's. :";
	cin>>a>>b;
	if(a>b)
	{
		c=a;
		d=b;
	}
	else
	{
		c=b;
		d=a;
	}
	for(int i=1;i<=d;i++)
	{
		l=i*c;
		if(l%d==0)
		{
			cout<<l;
			break;
		}
	}
	return 0;
}
