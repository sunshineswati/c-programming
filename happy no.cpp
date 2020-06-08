#include<iostream>
using namespace std;
int main()
{
	int T,n,i,j,p,m,sum,add,r;
	cin>>T;
	for(j=1;j<=T;j++)
	{
		cin>>n;
		m=n+1;
		p=m;
		sum=0;
		add=0;
		while(add!=1)
		{
			for(i=0;m!=0;i++)
			{
				r=m%10;
				sum=sum+r*r;
				m=m/10;
			}
			m=sum;
			if(sum==4)
			{
			p++;
			m=p;	
			}
			add=sum;
			sum=0;
		}
		cout<<p<<endl;
	}
	return 0;
}
