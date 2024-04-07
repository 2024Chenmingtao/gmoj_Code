#include<bits/stdc++.h>
using namespace std;
int main()
{
	double n = 0 ,s, i = 1;
	cin>>s;
	while(i<=s)
	{
		n=n*1.0+1/i;
		i++;
	}
	printf("%.3lf",n);
	return 0;
} 

