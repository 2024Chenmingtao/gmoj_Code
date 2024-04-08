#include<bits/stdc++.h>
using namespace std;
int n;
int a[114514];
int main()
{
	int max= -99999,weizhi;
	cin >> n;	
	for (int i =1 ;i <= n;i++)
	{
	 	cin>>a[i];
	}
	for (int i=1;i<=n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
			weizhi=i;
		}
	}
	 	cout<<max<<" "<<weizhi;

	return 0;
}