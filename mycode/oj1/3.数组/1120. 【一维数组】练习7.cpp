#include <bits/stdc++.h>
using namespace std;
int a[1001];
int main()
{
	int n;
	cin>>n;
	for (int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}	
	
	for (int i=n;i>=1;i--)
	{
		printf("%d ",a[i]);
	}
	return 0;
}