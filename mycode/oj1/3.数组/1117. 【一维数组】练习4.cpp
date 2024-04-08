#include <bits/stdc++.h>
using namespace std;
int a[1001];
//输出斐波列契数列
int main()
{
	int n;
	scanf("%d",&n); 
	a[1]=0;
	a[2]=1;
	a[3]=1;
	if(n<=3&&n>1)
	{
		cout<<"1";return 0;
	}
	else if(n==1)
	{
		cout<<0;return 0;
	}
	else 
	{
		
		for (int i=4;i<=n;i++)
		{
			a[i]=a[i-1]+a[i-2];
		}
	}
	for(int i=1,t=5;i<=n;i++)
	{
		cout<<a[i]<<' ';
		t--;
		if(t==0)
		{
			cout<<endl;
			t=5;
		}
	}
	return 0;
}