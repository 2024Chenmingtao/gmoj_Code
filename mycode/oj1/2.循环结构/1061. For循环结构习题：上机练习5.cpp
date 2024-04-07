#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,temp,big=-9999,som=9999;
	cin>>n;
	for (int i=1;i<=n;i++)
	{
		cin>>temp;
		if (temp > big)
		{
			big=temp;
		}
		if (temp < som )
		{
			som=temp;
		}
	} 
	cout<<big<<" "<<som;
	return 0;
}