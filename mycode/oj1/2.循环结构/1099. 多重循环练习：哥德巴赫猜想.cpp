#include <iostream>
#include <cmath>
using namespace std;
int k(int n)
{
	bool f=false;
	int x=2;
	while(x<=floor(sqrt(n))&&(n%x!=0)){x++;}
	if(x>floor(sqrt(n))) f=true;
	return f;
}
void a(int n)
{
	for(int i=2;i<=n/2;i++)
	{
		if(k(i)&&k(n-i))
		{
			cout<<n<<"="<<i<<"+"<<n-i<<endl;
			return;
		}
	}
}
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=n;i<=m;i++)
	{
		if(i%2==0)a(i);
	}
}