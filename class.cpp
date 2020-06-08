#include<iostream>
using namespace std;
class substract
{
	public:
		substract()
		{
			int a,b,c;
			a=9;
			b=3;
			c=a-b;
			cout<<c;
		}
};
class sum: public substract
{
};
int main()
{
	sum obj;
	return 0;
}

