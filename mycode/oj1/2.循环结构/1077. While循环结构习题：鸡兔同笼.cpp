#include<cstdio>
#include<cstdlib>
using namespace std;
int main()
{
	int i,n,a,b,c,d,e,f;
	scanf("%d%d",&a,&b);
	c=a*4;
	d=c-b;
	e=d/(4-2);
	f=a-e;
	printf("%d %d",e,f);
}