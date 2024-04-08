#include <iostream>
using namespace std;
int a[2001];
int main()
{
	int n,m,x;
	cin>>n>>m;
	x=m+1;
	for(int i=1;i<=m;i++)
	{
		cin>>a[i];
	}
	a[m+1]=n;
	for(int i=1;i<=x-1;i++)
	{
		for(int j=1;j<=x-i;j++)
		{
			if(a[j]>a[j+1])
			{
				int t=a[j];
				a[j]=a[j+1];
				a[j+1]=t; 
			}
		}
	}
	for(int i=1;i<=x;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}