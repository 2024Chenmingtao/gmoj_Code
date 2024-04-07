#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,y;
	cin>>n>>y;
	if(n%4==0&&n%400!=0||n%400==0)
	{
		if(y==2)
		{
			cout<<29;
		}
		else
		{
			if(y==1||y==3||y==5||y==7||y==8||y==10||y==12)
			{
				cout<<31;
			}
			else
			{
				cout<<30;
			}
		}
	}
	else if(n%4!=0||n%400==0)
	{
		if(y==2)
		{
			cout<<28;
		}
		else
		{
			if(y==1||y==3||y==5||y==7||y==8||y==10||y==12)
			{
				cout<<31;
			}
			else
			{
				cout<<30;
			}
		}
	}
}