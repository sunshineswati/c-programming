#include<iostream>
using namespace std;
int main()
{
	int i,n,arr[10];
	cout<<"enter the value:";
	cin>>n;
	arr[0]=0;
	arr[1]=1;
	cout<<arr[0]<<endl;
	cout<<arr[1]<<endl;
	for(i=2;i<=n;i++)
	{
		arr[i]=arr[i-1]+arr[i-2];
		cout<<arr[i]<<endl;
	}
	return 0;
}
