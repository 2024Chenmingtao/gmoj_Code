#include<bits/stdc++.h>
using namespace std;

int a[1001];
int n,b;
int main()
{
	int max;
	max = -99999;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for (int i=1;i<=n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
			b=i;
		}
	} 
	int temp;
	temp=a[1];
	a[1]=a[b];
	a[b]=temp;
	for (int i=1;i<=n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
