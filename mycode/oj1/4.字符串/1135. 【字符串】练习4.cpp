#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a;cin>>a;bool flag=false;
	for(int i=0;i<a.size();i++)if(a[i]=='@'&&i!=0&&i!=a.size()-1)flag=true;
	if(flag)cout<<"ok";else cout<<"error";
}