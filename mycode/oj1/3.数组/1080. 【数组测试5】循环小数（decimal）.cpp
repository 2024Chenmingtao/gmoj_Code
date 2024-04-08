#include<bits/stdc++.h>
using namespace std;
int n,p,k;
string s,q,h;
int main(){
	cin>>n;
	cin>>s;
	for(int i=0;i<s.size();i++){
	    if(k){
			if(s[i]==')'){
				k=0;
			}else{
				h+=s[i];
			}
		}
	    if(p){
	    	if(s[i]=='('){
	    		p=0;
				k=1;
			}else{
				q=q+s[i];
			}
		}
		if(s[i]=='.'){
			p=1;
		}
	}
	if(n<=q.size()){
		cout<<q[n-1];
	}else{
		cout<<h[(n-q.size()-1)%h.size()];
	}
	return 0;
} 