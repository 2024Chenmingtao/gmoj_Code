#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>

using namespace std;
int a[1001][1001]; 
int main()
{
	int *max=new int(-9999),*min=new int(9999);
	int n,x;
	scanf ("%d",&n);
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=n;j++)
		{
			if(*min>a[i][j])
			{
				*min=a[i][j];
				x=j;
			}
		}
		for(int s=1;s<=n;s++)
		{
			if(*max<a[s][x])
			{
				*max=a[s][x];
			}
		}
		if(*max==*min)
		{
			cout<<i<<" "<<x;
			return 0;
		}
		*max=-99999;
		*min=99999;
	}
	delete max;
	delete min;
    return 0;
}