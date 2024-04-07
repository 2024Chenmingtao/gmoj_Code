#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=n-i-2;j++)
		{
			cout<<" ";
		}
		for(int j=97;j<=i+1+96;j++)
		{
			cout<<(char)j<<" ";
		}
		cout<<endl;
	}
	return 0;
}