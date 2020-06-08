#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str1[20],str2[10];
	int a[26],index;
	int count=1,i;
	for(i=0;i<26;i++)
	{
		a[i]=0;
	}
	cin.getline(str1,20);
	for(i=0;str1[i]!='\0';i++)
	{
		index=str1[i]-97;
		a[index]=a[index]+1;
	}
	cin.getline(str2,20);
	for(i=0;str2[i]!='\0';i++)
	{
		index=str2[i]-97;
		if(a[index]==0)
		{
			count=0;
			break;
		}
		else
		{
			a[index]=a[index]-1;
		}
	}
	if(count==1)
	{
		cout<<"the word is anagram";
	}
	else
	{
		cout<<"word is not anagram";
	}
	return 0;
}
