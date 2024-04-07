#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,s=0;
	scanf("%d",&n);
	for (int i=1;i<=n;i+=2)
	{
		s+=i;
	}
	printf("%d",s);
	return 0;
}