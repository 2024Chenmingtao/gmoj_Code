#include<bits/stdc++.h>
using namespace std;

int main()
{
	int max=-999999, mai=9999999, n, a;
	
	scanf ("%d",&n);
	
	for (int i=1;i<=n;i++)
	{
		scanf ("%d",&a);
		
		if ( a >= max )
		{
			max = a;
		}
		
		if ( a <= mai )
		{
			mai = a; 
		}
	}
	
	printf ("%d",max*mai);
	
	return 0;
}