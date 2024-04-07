#include <iostream>
int a[101];
int main()
{
	short n;
	std::cin>>n;
	for(int i=1;i<=n;i++)
	{
		short t;
		std::cin>>t;
		a[t]++;
	}
	for(int i=1;i<=100;i++)
	{
		if(a[i]==1)
		{
			std::cout<<i;
			return 0;
		}
	}
	return 0;
}