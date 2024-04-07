#include<bits/stdc++.h>
using namespace std;
int main()
{
	double p=0;
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		p+=1.0/(i*i);
	}
	printf("%lf",sqrt(p*6));
	return 0;
}