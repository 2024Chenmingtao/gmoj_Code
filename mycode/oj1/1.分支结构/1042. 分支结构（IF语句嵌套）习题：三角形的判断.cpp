#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	if(a==b&&b==c) cout<<"DB";
	else if(a==b&&b!=c||a==c&&b!=c||c==b&&a!=c) cout<<"DY";
	else if(a!=b&&a!=c&&b!=c) cout<<"YB";
	return 0;
 } 