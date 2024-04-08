#include <iostream>
#include <cstdio>
int n,m=3,b,a[10001],s=1,x;
using namespace std;
int main()
{
	bool d=1;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		a[i]=1;
	}
	b=n;
	while(b>2)
	{
		s=0;
		if(d==1)
		{
			for(int i=1;i<=n;i++)
			{
				if(a[i]!=0)
				{
					s++;
				}
				if(s==m)
				{
					s=0;
					a[i]=0;
					b--;
				}
			}
			d=0;
		}
		else
		{
			for(int i=n;i>=1;i--)
			{
				if(a[i]!=0)
				{
					s++;
				}
				if(s==m)
				{
					a[i]=0;
					s=0;
					b--;
				}
			}
			d=1;
		}
	}
	if(!d)
	{
		for(int i=n;i>=1;i--)
		{
			if(a[i]!=0)
			{
				cout<<i;
				break;
			}
		} 
	}
	else
	{
		for(int i=1;i<=n;i++)
		{
			if(a[i]!=0)
			{
				cout<<i;
				break;
			}
		} 
	}
	return 0;
}