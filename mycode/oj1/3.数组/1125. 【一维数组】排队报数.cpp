#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m=1;
	cin>>n;
	while(n!=0&&m<n){
		m=m*2;
	}
	cout<<m/2;
	return 0;
}