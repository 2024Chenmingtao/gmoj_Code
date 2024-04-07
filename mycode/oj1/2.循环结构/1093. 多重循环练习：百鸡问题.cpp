#include <iostream>
using namespace std;
int main()
{
	for(int i=0;i<=100/5;i++)
	{
		for(int j=0;j<=100/3;j++)
		{
			for(int z=0;z<=3*100;z++)
			{
				if(5*i+3*j+z/3==100 && i+j+z==100 && z%3==0){
					cout<<i<<" "<<j<<" "<<z<<endl;
				}
			}
		}
	}
	return 0;
}