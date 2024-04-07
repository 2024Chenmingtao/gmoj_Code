#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a, b, temp;
	
	scanf("%d%d",&a,&b);
	
	for (int i=a;i<=b;i++)
	{
		if( i % 3 == 2 && i % 5 == 3 && i % 7 == 5 )
		{
			printf("%d",i);
		}
	}
	
	return 0;
} 