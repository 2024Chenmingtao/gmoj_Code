#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long a,b,c,s;
	cin>>a>>b>>c;
	if(a+b>c&&a+c>b&&b+c>a){
		if(a>b){
			if(a>c){
			    s=(c*c+b*b);	
			    if(s==a*a){
			    	cout<<"yes";
				}
				else{
					cout<<"no";
				}
			}
			else{
				s=(a*a+b*b);
				if(s==c*c){
					cout<<"yes";
				}
				else{
					cout<<"no";
				}
			}
			
		}
		else{
			if(b>c){
				s=(c*c+a*a);
				if(s==b*b){
					cout<<"yes";	
				}
				else{
					cout<<"no";
				}
			}
			else{
				s=(a*a+b*b);
				if(s==c*c){
					cout<<"yes";
				}
				else{
					cout<<"no";
				}
			}	
		}
	}
	else{
		cout<<"error";
	}
	return 0;
}