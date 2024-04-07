#include<bits/stdc++.h>
using namespace std;
int main()
{
	int yuan,fn=0;
	cin>>yuan;
	yuan*=100;
	for(int i=1;i<=yuan;i++)
	{
		for(int j=1;j<=yuan/2+1;j++)
		{
			for(int z=1;z<=yuan/5+1;z++)
			{
				if(i+j*2+z*5==yuan)
				{
					cout<<i<<' '<<j<<' '<<z<<endl;
					fn++; 
				}
			}
		}
	}
	cout<<fn;
	return 0;
}