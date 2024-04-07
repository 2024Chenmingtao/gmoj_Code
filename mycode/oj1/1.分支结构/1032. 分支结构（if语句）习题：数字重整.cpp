#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,b,c,s_1,s_2,s_3;
	cin>>n;
	a=n%10;b=n/10%10;c=n/100%10;
	if(a>=b&&b>=c)
	{s_1=a;s_2=b;s_3=c;}
	else if(a>=c&&c>=b)
    {s_1=a;s_2=c;s_3=b;}
	else if(b>=a&&a>=c)
	{s_1=b;s_2=a;s_3=c;}
	else if(b>=c&&c>=a)
	{s_1=b;s_2=c;s_3=a;}
	if(c>=a&&a>=b)
	{s_1=c;s_2=a;s_3=b;}
	else if(c>=b&&b>=a)
	{s_1=c;s_2=b;s_3=a;}
	printf("%d%d%d",s_1,s_2,s_3);
}