#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n=0,i=2;
	double s=100,t=100;
	
	scanf("%d",&n);
	while(i<=n)
	{
		s = s + t * 1.0 / 2 + t * 1.0 / 2;
		t = t * 1.0 / 2;
		i++;
	}
	
	printf("%.3f",s);
	
	return 0;
}