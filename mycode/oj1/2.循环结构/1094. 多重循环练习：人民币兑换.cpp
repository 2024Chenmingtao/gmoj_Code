#include<bits/stdc++.h>
using namespace std;
int main(){
	int s=0,y;
	for(int i=1;i<=37;i++){
		for(int j=1;j<=40-i;j++){
			for(int k=1;k<=40-i-j;k++){
				y=40-i-j-k;
				if(i+j*2+k*5+y*10==100&&i+j+k+y==40&&y!=0){
					s++;
				}
			}
		}
	}
	printf("%d",s);
	return 0;
}