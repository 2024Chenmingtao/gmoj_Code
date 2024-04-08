#include<bits/stdc++.h>
using namespace std;
int a[6][6];
int x,y,t;
int main()
{
	for (int i=1;i<=5;i++)
	{
		for (int j=1;j<=5;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	scanf("%d%d",&x,&y);
		
	for(int i=1;i<=5;i++)
	{
			int temp;
			temp=a[x][i];
			a[x][i]=a[y][i];
			a[y][i]=temp;
	}
	 
	for (int i=1;i<=5;i++)
	{
		for (int j=1;j<=5;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
