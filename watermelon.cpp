#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int T;
	float a,b,f,p,q,x,n;
	cin>>T;
	for(int i=0;i<T;i++)
	{
		cout<<"Enter the weight of watermelon in kgs: ";
		cin>>x;
		cout<<"\n Enter the no of friends:";
		cin>>n;
		if(x<0||n<0)
		{
			cout<<"Invalid output";
		}
		else
		{
		a=x/4;
		b=x-a;
		p=a/4;
		q=(b*75)/100;
		a=a-p;
		b=b-q;
		f=(p+q)/n;
		cout<<"\n My share of watermelon:";
		cout<<fixed<<setprecision(2)<<a<<"Kgs";
		cout<<"\n My brother's share:";
		cout<<fixed<<setprecision(2)<<b<<"kgs";
		cout<<"\n Each of our frnds share:";
		cout<<fixed<<setprecision(2)<<f<<"kgs";
		cout<<endl;
	    }
	}
	return 0;
}
