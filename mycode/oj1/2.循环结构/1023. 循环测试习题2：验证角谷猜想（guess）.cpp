#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;bool s=false;
	scanf("%d",&n);
	
	
	while (n!=1)
	{
		if (n%2==1)
		{
			printf("%d ",n);
			n=n*3+1;
			s=true;
		}
		else 
		{
			n=n/2;
		}
	}
	if (s==false)
	{
		printf("No number can be output!");
	}
	return 0;
}