#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,s=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		int t=i;
		while (t!=0)
		{
			if(t%10==m)
			{
				s++;
				break;
			}
			t=t/10;
		}
	}
	cout<<s;
	return 0;
}