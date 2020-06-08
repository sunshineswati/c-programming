#include<iostream>
#include<string>
//#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	std::string::iterator it;
	std::string::reverse_iterator rt;
	for(it=s.begin();it!=s.end();it++)
	{
		cout<<*it;
	}
	cout<<endl;
	for(rt=s.rbegin();rt!=s.rend();rt++)
	{
		cout<<*rt;
	}
	getline(cin,s);
	cout<<s;
	return 0;
}
