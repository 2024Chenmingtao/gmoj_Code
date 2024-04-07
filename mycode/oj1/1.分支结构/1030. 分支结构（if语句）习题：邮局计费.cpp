#include<bits/stdc++.h>
using namespace std;
int main()
{
	float n,m;
	scanf("%f",&n);
	if(n<=0)
		m=0;
	else if(n<=1)
		m=1.5;
	else
		m=1.5+(n-1)*0.8;
	printf("%.2f",m);
	return 0;
}