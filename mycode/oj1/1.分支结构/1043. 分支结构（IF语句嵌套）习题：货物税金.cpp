#include<cstdio>
using namespace std;
int main()
{
	int a,s;
	scanf("%d",&a);
	if(a>10000)
	s=a*0.05;
	if(a>5000&&a<=10000)
	s=a*0.03;
	if(a>1000&&a<=5000)
	s=a*0.02;
	if(a<=1000)
	s=0;
	printf("%d",s);
	return 0;
}