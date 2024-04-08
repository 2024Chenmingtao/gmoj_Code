#include<bits/stdc++.h>
using namespace std;
int n;
bool a[55] = {1};
int main(){
	cin>>n;
	for (int i = 1;i <= n + 1;i++){
		for (int j = 1;j <= 52;j++){
			if (j % i == 0){
				if (a[j] == 0) a[j] = 1;
				else a[j] = 0;
			}
		}
	}
	for (int i = 1;i <= 52;i++) cout<<a[i]<<" ";
	return 0;
} 