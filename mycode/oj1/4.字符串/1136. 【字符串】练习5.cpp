#include <bits/stdc++.h>
using namespace std;
char a[114514],b[114514],c[114514];//a是替换目标 b是查找目标 c是替换内容
int main()
{	
	cin.getline(a,114514);
	cin.getline(b,114514);
	cin.getline(c,114514);
	int a_long=strlen(a),b_long=strlen(b),c_long=strlen(c);
	for(int i=0;i<a_long;i++)
	{	
		bool flag;
		if (a[i] == b[0])//初步搜索 
		{
			
			flag = true;
			for(int j=0;j<b_long;j++)
			{
				if(a[i+j]!=b[j])//深度搜索(不是算法)！ 
				{
					flag=false;
					break;
				}
			}
			if(flag)
			{
				for(int j=0;j<i;j++)
				{
					cout<<a[j];
				}
				for(int j=0;j<c_long;j++)
				{
					cout<<c[j]; 
				}
				for(int j=i+b_long;j<a_long;j++)
				{
					cout<<a[j];
				}
			}
		}		
	}
	return 0;
}