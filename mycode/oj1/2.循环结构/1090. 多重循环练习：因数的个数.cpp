#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,s=0;

	cin>>n;
	for (int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			s+=1;
		}
	}cout<<s;
	return 0;
}	 