#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,s=0,t;
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		scanf("%d",&t);
		s+=t/10;
		if(t%10!=0)s+=1;
	}
	cout<<s;
	return 0;
}