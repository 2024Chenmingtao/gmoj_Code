#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n+1][n+1];
	for (int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			a[i][j]=i+j;
		}
	}
	for(int i=1;i<=n;i++)
	{
		for (int j=1;j<=n;j++)
		{
			cout<<a[i][j]<<" ";	
		}
		cout<<endl;
	}
    return 0;
}
