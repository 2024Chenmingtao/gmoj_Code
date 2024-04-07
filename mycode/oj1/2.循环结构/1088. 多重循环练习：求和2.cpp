#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	double s=0,l=1;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
		l*=j;
		}
		s += 1.0/l;
		l=1;
	}
	cout<<fixed<<setprecision(4)<<s;
	return 0;
}