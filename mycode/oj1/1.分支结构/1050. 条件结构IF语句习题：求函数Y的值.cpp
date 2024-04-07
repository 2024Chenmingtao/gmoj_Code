#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if(n<100&&n>0)
	{
		cout<<n+1;
	}
	else if(n>=100&&n<200)
	{
		cout<<n-1;
	}
	else
	{
		cout<<-1;
	}
	return 0;
}