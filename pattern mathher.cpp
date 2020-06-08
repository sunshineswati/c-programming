#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	 int i,j,l,x,y,flag=0;
	 cin>>s;
    l=s.length();
    i=0;
    while(i<l)
    {
     x=0,y=0;
    for(;s[i]!='\0';i++)
    {
    	if(s[i]=='y')
    	{
    		break;
		}
        x++;
    }
    for(j=i;s[j]!='\0';j++)
    {
    	if(s[j]=='x')
    	{
    		break;
		}
        y++;
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
    i=j;
    }
    if(flag==1)
    {
        cout<<"1";
    }
   //Your code here
   
}
