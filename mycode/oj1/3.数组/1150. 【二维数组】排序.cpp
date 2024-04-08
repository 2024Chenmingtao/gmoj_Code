#include <stdio.h>
int a[100][2];
int main()
{
	int n,temp;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i][1]);
		a[i][2]=i;
	}
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<i;j++)
		{
				if(a[j][1]>a[i][1])
				{
					temp=a[j][1];
					a[j][1]=a[i][1];
					a[i][1]=temp;
					temp=a[j][2];
					a[j][2]=a[i][2];
					a[i][2]=temp;
				}
		}
	}
	for(int i=1;i<=n;i++)
	{
		printf("%d %d\n",a[i][1],a[i][2]);
	}
	return 0;
}