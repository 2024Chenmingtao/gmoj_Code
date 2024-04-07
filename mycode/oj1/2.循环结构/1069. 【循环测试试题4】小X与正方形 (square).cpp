#include <iostream>
#include <cmath>
using namespace std;
int juli(int x,int y,int q,int p)
{
	return (x-q)*(x-q)+(y-p)*(y-p);
}
int main()
{
	int x1,y1,x2,y2,x3,y3,a,b,c;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;//输入三个点的坐标 
	a=juli(x1,y1,x2,y2);//计算点1到点2的距离 
	b=juli(x1,y1,x3,y3);//计算点1到点3的距离
	c=juli(x2,y2,x3,y3);//计算点2到点3的距离
	int d;
	if(b>a)
	{ 
		swap(x2,x3);
		swap(y2,y3);
		d=a;
	}
	else if(c>a)
	{
		swap(x1,x3);
		swap(y1,y3);
		d=a;
	}
	else
	{
		d=b;
	} 
	for(int i=1;i<=19;i++)
	{
		for(int j=1;j<=19;j++) 
		{
			int p=juli(i,j,x1,y1),
			    q=juli(i,j,x2,y2); 
			if(p==q&&p==d&&(i!=x3||j!=y3))
			{
				cout<<i<<' '<<j; 
				return 0;
			}
		}
}
			
	return 0;
}	