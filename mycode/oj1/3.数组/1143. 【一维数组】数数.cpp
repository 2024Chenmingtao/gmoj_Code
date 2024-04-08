#include <bits/stdc++.h>
using namespace std;
int a[1001];
int main()
{
	int n,s=1,d=0;
	cin>>n;
	for (int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for (int i=1;i<=n-1;i++)
	{
		for (int j=1;j<=n-i;j++)
		{
			if(a[j]<a[j+1])
			{
				int temp;
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for (int i=1;i<=n;i++)
	{
		if(a[i]==a[i+1])
		{
			s++;
		}
		else if(a[i]!=a[i+1])
		{
			d++;
			cout<<s<<" ";
			s=1;
		}
	}
	 cout<<d;
}