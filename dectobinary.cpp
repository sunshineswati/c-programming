#include<iostream>
using namespace std;
int main()
{
	int a[20],b,i,n;
	cout<<"enter the no in decimal:";
	cin>>b;
	n=0;
	//for(i=0;i<=b;i++)
	i=0;
	while(b!=0)
	{
		a[i]=(b%2);
		b=b/2;
		n++;
		i++;
	}
	for(i=n-1;i>=0;i--)
	{
		cout<<a[i]<<endl;
	}
	return 0;
	
}
