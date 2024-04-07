#include<cstdio>
using namespace std;
double w,s=0;
int main()
{
	scanf("%lf",&w);
	if(w<=3)
	{
		s=8;
		printf("%.1lf\n",s);
	}
	else
	{
		s=(w-3)*1.6+8;
		printf("%.1lf\n",s);
	}
	return 0;
}