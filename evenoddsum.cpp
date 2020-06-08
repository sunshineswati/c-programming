#include<iostream>
using namespace std;
int main()
{
	int T;
	int a[100],arr[301],i,j,even,odd;
	cin>>T;
	for(i=1;i<=T;i++)
	{
		cin>>a[i];
		for(j=0;j<a[i];j++)
		{
			cin>>arr[j];
		}
	}
	for(i=1;i<=T;i++)
	{
		even=0;
		odd=0;
		for(j=0;j<a[i];j++)
		{
			if(j%2==0)
			{
				even+=arr[j];
			}
			else
			{
				odd+=arr[j];
			}
		}
		cout<<even<<endl;
		cout<<odd<<endl;
	}
	return 0;
}
