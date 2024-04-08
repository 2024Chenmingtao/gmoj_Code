#include<bits/stdc++.h>
using namespace std;
int a[3][3];
int max=-9999999;
int main()
{
	int h=0,l=0;
	
	for (int i=0;i<=2;i++)
	{
		for (int j=0;j<=2;j++)
		{
			cin>>a[i][j];
		}
	}
	int max=a[0][0];
	for (int i=0;i<=2;i++)
	{
		for (int j=0;j<=2;j++)
		{
			if(a[i][j]<max)
			{
				max=a[i][j];
				h=i;
				l=j;
			}
		}
	}
	cout<<max<<" "<<h+1<<" "<<l+1;
	return 0;
}