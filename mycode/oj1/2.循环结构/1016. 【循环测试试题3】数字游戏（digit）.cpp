#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,s=1;
	scanf("%d",&n);
	cout<<n<<" ";
	while (n!=0)
	{
		int t=n;
		s=1;
		while (t!=0)
		{
			if(t>0)
			{
				s*=t%10;
			}
			
			t=t/10;
		}
		cout<<s<<" ";
		n=s;
	}
	return 0;
}