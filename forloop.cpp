#include<iostream>
#include<math.h>
using namespace std;
void isprime(int n);
void isPrime(int n)
{
    int flag=0;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            cout<<"No"<<endl;
            break;
        }
        flag=1;
        //Write your logic here
        /*n is prime only if it is not divisible by any i. We will not reach till n and 1 is already discarded*/
    }
    if(flag==1)
    {
        cout<<"Yes"<<endl;
    }
   cout<<endl;
   if(n==1)
   {
       cout<<"No"<<endl;
   }
   if(n==2||n==3)
   {
       cout<<"Yes"<<endl;
   }
}
   int main()
   {
   	int t;
   	cin>>t;
   	int n;
   	while(t--)
   	{
   		cin>>n;
   		isprime(n);
	   }
	   return 0;
   }
