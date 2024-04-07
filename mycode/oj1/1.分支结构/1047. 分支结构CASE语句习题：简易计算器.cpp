#include<bits/stdc++.h>
using namespace std;
int a,b;
char ch;
int main()
{
	cin>>a>>b>>ch;
	if(ch=='+')
	{
		cout<<a+b;
	}
	if(ch=='-')
	{
		cout<<a-b;
	}
	if(ch=='/')
	{
		cout<<a/b;
	}
	if(ch=='*')
	{
		cout<<a*b;
	}
	if(ch=='%')
	{
		cout<<a%b;
	}
	return 0;
}