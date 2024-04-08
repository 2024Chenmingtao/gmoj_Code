#include <cstdio>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	int a[n+1][n+1];
	a[1][1]=1;
	for(int i=2;i<=n;i++)
	{
		a[i][1]=1;a[i][i]=1;
		for(int j=2;j<=i-1;j++)
		{
			a[i][j]=a[i-1][j-1]+a[i-1][j];
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			if(a[i][j]!=0)
			{
				printf("%d ",a[i][j]);
			}
		}
		printf("\n");
	}
	return 0;
 } 