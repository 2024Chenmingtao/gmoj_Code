#include<bits/stdc++.h>
using namespace std;

int main()
{
	int x,y,s=0,p=0;
	scanf("%d%d",&x,&y);
	while(1)
	{
		s+=y;
		if(s>=x)
		{
			p++;
			printf("%d",p);
			break;
		}
		p+=2;
		s-=1;
	}
    return 0;
}