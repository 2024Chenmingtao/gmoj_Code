#include<bits/stdc++.h>
using namespace std;
int num,n;
int a[1001];
int main()
{
	scanf("%d%d",&n,&num);
	for (int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for (int i=1;i<=n;i++)
	{
		if(a[i]==num)
		{
			cout<<i<<" ";
			return 0;
		}
	}
	cout<<"0";
	return 0;
}