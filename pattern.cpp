#include<iostream>
using namespace std;
int main()
{
	char ch;
	int i;
	ch=65;
	i=ch;
	for( i=ch;i<70;i++)
	{
		for(int j=65;j<=i;j++)
		{
			ch=j;
			cout<<ch<<"\t";
		}
		cout<<endl;
	}
	return 0;
}
