#include<iostream>
#include<process.h>
using namespace std;
int main()
{
	int n,i;
	char ch;
	do
	{
		cout<<"enter the no:";
		cin>>n;
		if(n%2==0)
		{
			cout<<"no is even";
		}
		else
		{
			if(n==1)
			{
				cout<<"no is odd";
			}
			else
			{
			for(i=2;i<=n/2;i++)
				if(n%i==0)
				{
					cout<<"no is odd";
					exit(0);
				}
					cout<<"no is prime";
		}
		}
		cout<<"do u want to continue";
		cin>>ch;
	}while(ch=='y'|| ch=='Y');
	return 0;
}
