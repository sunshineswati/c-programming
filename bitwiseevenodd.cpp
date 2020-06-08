#include<iostream>
using namespace std;
int main()
{
	int num,a;
	cin>>num;
	a=num&1;
	cout<<a;
	if(num&1==1)
	{
		cout<<"this is odd no."<<endl;
	}
	else
	{
		cout<<"this is even no."<<endl;
	}
	return 0;
}
