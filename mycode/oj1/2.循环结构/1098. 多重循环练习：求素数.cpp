#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,ans,hang=0,s;
	cin>>n;
	for(int i=2;i<=n;i++)
	{
		s = 0;
		for(int j=2;j<=sqrt(i);j++)
		{
			if(i%j==0)
			{
				s = 1;
				break;
			}
		} 
		if(s==0)
		{
			cout<<i<<" ";
			hang++;
			if(hang==5)
			{
				hang=0;
				cout<<endl;
			}
		}
	}
}