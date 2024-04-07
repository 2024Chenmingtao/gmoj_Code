#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long a,b,c,n;
	cin>>a>>b>>c;
	if(a+b>c&&a+c>b&&b+c>a)
	{
		n=(a+b+c)/2;
		n=sqrt(n*(n-a)*(n-b)*(n-c));
		cout<<n;
	}
	else
		cout<<"Can't"; 
	return 0;
}
