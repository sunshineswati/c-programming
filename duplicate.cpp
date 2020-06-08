#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str[20];
	int a[26],i,flag=0,index;
	cin.getline(str,20);
	for(i=0;i<26;i++)
	{
		a[i]=0;
	}
	for(i=0;str[i]!='\0';i++)
	{
		index=str[i]-97;
		a[index]=a[index]+1;
	}
	for(i=0;i<26;i++)
	{
		if(a[i]>2||a[i]==2)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		cout<<"No";
	}
	else
	{
		cout<<"Yes";
	}
	return 0;
}
	
