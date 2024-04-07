#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,d=1;
	scanf("%d",&a);
	scanf("%d",&b);
	while((d%a!=0)||(d%b!=0)){
		d++;
	}
	c=d;
	printf("%d",c);
	return 0;
 } 
