#include<iostream>
using namespace std;
int main()
{
	int n,a=0,b=1,c;
	cin>>n;
	for(int i=3;i<=n;i++)
	{
		c=a+b;
		a=b;
		b=c;
	}
	cout<<c;
	return 0;
} 	