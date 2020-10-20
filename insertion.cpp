#include<iostream>
using namespace std;
int main()
{
	int item,a[10],n,pos;
	cout<<"enter size of array :";
	cin>>n;
	cout<<"enter elements of array in sorted"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"enter the element those u want to insert:";
	cin>>item;
	if(n==10)
	{
		cout<<"overflow"<<endl;
	}
	else
	{
		if(item<a[0])
		{
			pos=0;
		}
		else
		{
			for(int i=0;i<n;i++)
			{
				if(item>a[i]&& item<a[i+1])
				{
					pos=i+1;
					break;
				}
				else
				{
					pos=n;
				}
			}
		}
	}
	for(int i=n;i>=pos;i--)
	{
    	a[i]=a[i-1]	;
    	
	}
	a[pos]=item;
	for(int i=0;i<=n;i++)
	{
		cout<<a[i]<<endl;
	}
	return 0;
}
