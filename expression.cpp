#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	double y,f;
	double e;
	e=2.71828;
	cin>>y;
	f=2-(y*exp(2*y))+pow(4,y);
	cout<<"result of given expression is:"<<f;
	return 0;	
}
