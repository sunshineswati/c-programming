#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
	int i,l,a;
	int flag;
	char str[20];
	gets(str);
	l=strlen(str);
	a=l;
	while(1)
	{
		flag=1;
		for(i=0;i<l/2;i++)
		{
			if(str[i]!=str[l-1-i])
			{
				flag=0;
				break;
	        }
	    }
	    if(flag==1)
	    {
	    	break;
		}
	    else
	    {
	    	l--;
		}
    }
	cout<<a-l;
	return 0;
}
