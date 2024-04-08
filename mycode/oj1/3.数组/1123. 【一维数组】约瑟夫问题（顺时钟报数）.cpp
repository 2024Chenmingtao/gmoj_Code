#include<bits/stdc++.h>
using namespace std;
bool a[101];
int n,m,s,t,f;
void csh()
{
	for(int i=1;i<=n;i++) 
	{
		a[i]=false;
	}
}
void ysf()
{
	csh();
	while(f!=n)
	{
		t++;
		if(t==n+1) 
		{
			t=1;
		}
		if(a[t]==false) 
		{
			s++;
		}
		if(s==m)
		{
			s=0;
			cout<<t<<" ";
			a[t]=true;
			f++;
		}
	}
}
int main()
{
	
	cin>>n>>m;
	ysf();
}