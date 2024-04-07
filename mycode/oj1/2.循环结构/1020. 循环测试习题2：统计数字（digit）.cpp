#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,s=0;
	cin>>n>>m;
	for(int i=n;i<=m;i++)
	{
		int t=i;
		while (t!=0)
		{
			if(t%10==2)
			{
				s++;
			}
			t=t/10;
		}
	}
	cout<<s;
	return 0;
}
