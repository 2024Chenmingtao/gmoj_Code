#include<bits/stdc++.h>
using namespace std;
int n,a,b,c;
int main(){
	cin>>n;
	if (n < 10){
		cout<<1<<endl;
		cout<<n;
	} 
	else if (n < 100){
		cout<<2<<endl;
		a = n / 10;
		b = n % 10;
		cout<<a<<" "<<b;
	} 
	else{
		cout<<3<<endl;
		a = n / 100;
		b = n / 10 % 10;
		c = n % 10;
		cout<<a<<" "<<b<<" "<<c;
	}
	return 0;
}