#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	bool s=true;
	cin>>n;
	for (int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			s=false;
		}
	}
	if(n==1)
	{
		cout<<"NO\nNO";
	}
	else if(s)
	{
		cout<<"YES\nNO";
	}
	else
	{
		cout<<"NO\nYES";
	}
	
	return 0;
}	 
