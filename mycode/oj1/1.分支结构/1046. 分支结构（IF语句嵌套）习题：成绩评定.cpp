#include<iostream>
using namespace std;
int main()
{
	int c;
	cin>>c;
	if(c<60)cout<<"unsatisfactory";
	else
	{
		if(c>=60&&c<90)
		cout<<"satisfactory";
		else
		{
			if(c>=90)cout<<"outstanding";
		}
	}
	return 0;
}