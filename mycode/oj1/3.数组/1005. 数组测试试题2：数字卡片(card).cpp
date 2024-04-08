#include <bits/stdc++.h>
using namespace std;
int a[10001],b[10];
int main()
{
	int n;
	cin>>n;
	for (int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
//		int t=i;
		if(a[i]==0)
		{
			b[0]++;
		}
		while (a[i]!=0)
		{
			int x=a[i]%10;
			b[x]++;
			a[i]=a[i]/10;
		}
	}
	for(int i=0;i<=9;i++)
	{
		if(b[i])
		{
			cout<<i<<" "<<b[i]<<endl;
		}
		
	}
	return 0;
}