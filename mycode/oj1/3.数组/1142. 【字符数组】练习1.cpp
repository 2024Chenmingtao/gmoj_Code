#include<bits/stdc++.h>
using namespace std;
int n,b[91];
char c[105];
int main()
{
	cin>>n;
	cin>>c;
	for (int i = 0;i < n;i++)
	{
		b[int(c[i])]++;
	}
	for (int i = 65;i <= 90;i++)
	{
		if (b[i])
		{
			cout<<char(i)<<":"<<b[i]<<endl;
		}
	}
	return 0;
}