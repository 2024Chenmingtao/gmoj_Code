#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,ans=0,temp;
	scanf ("%d",&n);
	for (int i=1;i<=n;i++)
	{
		scanf ("%d",&temp);
		ans+=temp;
	}
	printf ("%d",ans);
	return 0;
}