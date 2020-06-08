#include<iostream>
using namespace std;
int main()
{
	int a,b,c,v,i;
	v=1;
	i=2;
	cout<<"enter the no's. :";
	cin>>a>>b;
	c=(a>b)?b:a;
	//for(int i=1;i<=c;i++)
	while(i<=c)
	{
		if(a%i==0 && b%i==0)
		{
			v=v*i;
			a=a/i;
			b=b/i;
		}
		else
		{
			i++;
		}
	}
	cout<<"hcf ="<<v;
	return 0;
}
