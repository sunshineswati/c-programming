#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	int arr[20],f,k,n,i,j;
	int count=1,con=0,temp;
	cin>>T;
	for(i=0;i<T;i++)
	{
		cin>>n;
		cin>>k;
		for(j=0;j<n;j++)
		{
			cin>>arr[j];
		}
		f=floor(n/k);
		for(int k=0;k<n;k++)
		{
			if(arr[k]!=temp)
			{
			for(j=k+1;j<n;j++)
			{
				if(arr[k]==arr[j])
				{
					count++;
				}
			}
			if(count>f)
			{
				temp=arr[k];
			}
			else if(count==f)
			{
				con++;
			}	
			count=1;
		}
		}
		cout<<con;
	}
}
