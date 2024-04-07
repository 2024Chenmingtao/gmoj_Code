#include<iostream>
using namespace std;
int main(){
	int n,i=0;
	cin>>n;
	for(;n!=1;i++){
		if(n%2==0){
			n=n/2;
		}else{
			n=n*3+1;
		}
	}
	cout<<i;
	return 0;
} 