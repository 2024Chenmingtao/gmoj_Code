#include<bits/stdc++.h>
using namespace std;
int main()
{
	for(int i=1;i<=9;i++)
	{
		for(int j=0;j<=9;j++)
		{
			int t = i * 1000 + i * 100 + j * 10 + j;
			if(int(sqrt(t))*int(sqrt(t))==t)
			{
				cout<<t;
				return 0;
			}
		}
	}
}