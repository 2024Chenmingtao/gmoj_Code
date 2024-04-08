#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,ans,flag=0;
	char a[60];
	cin>>n>>m;
	ans=n;
	if(m<=10){
		m=m-1;
	}else{
		flag=1;
		m=m-11+'A';
	}
	if(flag){
		for(int i=0;i<n;i++){
			cin>>a;
			int s=strlen(a);
			for(int j=0;j<s;j++){
				if((a[j]>='0'&&a[j]<='9')||(a[j]>='A'&&a[j]<=m)){
					continue;
				}else{
					ans--;
					break;
				}
			}
		}
	}else{
		for(int i=0;i<n;i++){
			cin>>a;
			int s=strlen(a);
			for(int j=0;j<s;j++){
				a[j]=a[j]-'0';
				if((a[j]>=0&&a[j]<=m)){
					continue;
				}else{
					ans--;
					break;
				}
			}
		}
	}
	cout<<ans;
	return 0;
}