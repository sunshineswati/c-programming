#include<iostream>
using namespace std;
int main()
{
	int n,i,rev,a;
	cout<<"enter the value :";
	cin>>n;
	a=n;
	while(n!=0)
	{
		rev=(n%10)+(rev*10);
		n=n/10;
	}
	if(rev==a)
	{
		cout<<"this is palindrome";
	}
	else
	{
		cout<<"not palindrome";
	}
	return 0;
}


