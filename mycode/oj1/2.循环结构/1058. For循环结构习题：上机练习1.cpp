#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	long long s=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		s+=i*i;
	}
	cout<<s;
	return 0;
}
