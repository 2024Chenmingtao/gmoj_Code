#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i=1,n;
	 int b=1;
	scanf("%d",&n);
	do{
		b*=i;
		i++;
	}
	while(i<=n);
	printf("%d",b);
	return 0;
}