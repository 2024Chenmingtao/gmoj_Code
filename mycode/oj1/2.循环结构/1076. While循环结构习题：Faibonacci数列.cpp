#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,y=2,a=0,b=1,c;
	scanf("%d",&n);
	printf("%d %d ",a,b);
	for(int i=3;i<=n;i++){
		c=a+b;
		if(y<5){
			printf("%d ",c);
			y++;
		}else{
			printf("\n%d ",c);
			y=1;
		}
		a=b;
		b=c;
	}
	return 0;
} 