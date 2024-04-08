#include<bits/stdc++.h> 
using namespace std;
int a[1001];
int n;
int main()
{
	cin>>n;
	for (int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	int temp;
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<i;j++)
		{
				if(a[j]>a[i])
				{
					temp=a[j];
					a[j]=a[i];
					a[i]=temp;
				}
		}
	} 
	
	for (int i=1;i<=n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}