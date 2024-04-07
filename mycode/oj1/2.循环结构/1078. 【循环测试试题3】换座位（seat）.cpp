#include <iostream>
int main()
{
	short n,t,s=0;
	std::cin>>n;
	for(int i=1;i<=n;i++)
	{
		std::cin>>t;
		if(t!=i)
		{
			s++;
		}
	}
	std::cout<<s;
	return 0;
}