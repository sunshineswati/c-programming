#include<iostream>
#include<string.h>
using namespace std;
string s;
//int flag;
int main()
{
	int palindrome(int,int);
	int l,i,flag;
	cin>>s;
	l=s.length();
	i=0;
	flag=0;
	flag=palindrome(i,l);
	if(flag==1)
	{
		cout<<"it is palindrome";
	}
	else
	{
		cout<<"not palindrome";
	}
	return 0;
}
int palindrome(int k,int h)
{
	int t,f;
	if(k<=h)
	{
		if(s[k]==s[h-1])
		{
			//f=1;
			t=palindrome(k+1,h-1);
			return t;
		}
		else
		{
			f=0;
			return f;
			//break;
		}
		//return flag;
	}
	else
	{
		f =1;
		return f;
	}
}

