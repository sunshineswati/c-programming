#include<iostream>
using namespace std;
int result=0,temp_sum,t;
int func(int i);
int main()
{
	int i;
	cin>>t;
	i=1;
	func(i);
	cout<<result;
	return 0;
}
int func(int i)
    {
		int n;
		cin>>n;
		if(i==t)
		{
			return n;
		}
		else
		{
			temp_sum=func(i+1);
			result=result+n*temp_sum;
			return temp_sum+n;
		}
	}

