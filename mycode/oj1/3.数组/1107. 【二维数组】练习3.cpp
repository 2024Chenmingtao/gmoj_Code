#include <iostream>
using namespace std;
int main()
{
	int n;
	int s=0;
	cin>>n;
	int a[n+1][n+1];
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(i==j||i+j==n+1)
			{
				s+=a[i][j];
			}
		}
	}
	cout<<s;
	return 0;
}
