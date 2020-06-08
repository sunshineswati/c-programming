#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	 int i,j,l,x,y,flag=0,a,b=0,c=0;
	 cin>>s;
    l=s.length();
    a=0;
    while(a<l)
    {
     x=0,y=0;
    for(i=a;s[i]!='\0';i++)
    {
    	if(s[i]!='x')
    	{
    		break;
		}
        x++;
        b++;
    }
    for(j=b;s[j]!='\0';j++)
    {
    	if(s[j]!='y')
    	{
    		break;
		}
        y++;
        c++;
    }
    if(x!=y)
    {
        cout<<"0";
        flag=0;
        break;
    }
    else
    {
        flag=1;
    }
    i=c;
    }
    if(flag==1)
    {
        cout<<"1";
    }
   //Your code here
   
}
