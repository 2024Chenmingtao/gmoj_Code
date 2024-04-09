#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(char i='a';i<=96+n;i+=2)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	for(char i=96+n;i>='a';i-=2){
		cout<<i<<" ";
	}
	return 0;
}