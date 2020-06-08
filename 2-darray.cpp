#include<iostream>
using namespace std;
int main()
{
	int a[5][5],m,n,sum=0;
	cout<<"enter the value of m and n:";
	cin>>m>>n;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			for(int k=0;k<=i;k++)
			{
				for(int l=0;l<=j;l++)
				{
			sum=sum+a[k][l];
		}	
	}
			cout<<sum<<" ";	
		sum=0;
		}
		cout<<endl;
	}
	return 0;
}
