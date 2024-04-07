#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,s=0,s2=1;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			s2*=i;
		}
		s+=s2;
		s2=1;
	}
	cout<<s<<endl;
}
