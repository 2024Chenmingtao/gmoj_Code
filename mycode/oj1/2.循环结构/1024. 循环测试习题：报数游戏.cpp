#include<bits/stdc++.h>
using namespace std;
int main(){
	int b,n=0,m=0,a1,a2,s=0;
	scanf("%d",&b);
	scanf("%d",&a1);
	scanf("%d",&a2);
	for(int i=1;i<=b;i++){
		if(m==a1){
		m=0;
		}
		if(n==a2){
		n=0;
		}
		n=n+1;
		m=m+1;
        if(n==m){
		   s=s+1;
		}
	}
	printf("%d",s);
}