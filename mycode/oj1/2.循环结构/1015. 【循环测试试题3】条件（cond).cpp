#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	long long a=0;
	
	scanf ("%d",&n);
	
	for(int i=1;i<=floor(sqrt(n));i++)
	{
		if(n%i==0)
		{
			a+=i;
			a+=n/i;
			if(i*i==n)
			{
				a-=i;
			}
		}
	}
	
	printf("%lld",a);
	
	return 0;
}