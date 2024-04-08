#include<bits/stdc++.h>
using namespace std;
/*
第一行一个整数n(n<=10)，表示A班参与的项目数。
第二行n个整数，表示A班参与各个项目的得分，中间用空格分开。
第三行一个整数m(m<=10)，表示B班参与的项目数。
第四行m个整数，表示B班参与各个项目的得分，中间用空格分开。
*/
int a[1001],b[1001];
int main()
{
	int n;
	scanf("%d",&n);//in 1 
	for (int i=1;i<=n;i++)//in 2
	{
		scanf("%d",&a[i]);
	}
	int m;
	scanf("%d",&m);//in 3
	for (int i=1;i<=m;i++)//in 4
	{
		scanf("%d",&b[i]);
	}
	/*
	共两行：
	第一行一个字母，“A”或“B”，表示哪个班获胜。数据保证能分出胜负。
	第二行输出两个整数，中间用空格分隔，分别表示A班的总分和B班的总分。	
	*/
	int as=0;//a班总分
	for (int i=1;i<=n;i++)
	{
		as+=a[i];
	} 
	int bs=0;
	for (int i=1;i<=m;i++)
	{
		bs+=b[i];
	}
	
	if(as>bs)
	{
		printf("A\n");
	}
	else 
	{
		printf("B\n");
	}
	printf("%d %d",as,bs);
	return 0;
}