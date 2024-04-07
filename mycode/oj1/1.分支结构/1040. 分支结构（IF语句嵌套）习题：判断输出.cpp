#include<iostream>
using namespace std;
int main()
{
	char a;
	cin>>a;
	if(a=='A'||a=='a') cout<<1;
	else if(a=='B'||a=='b') cout<<2;
	else if(a=='C'||a=='c') cout<<3;
	else if(a=='D'||a=='d') cout<<4;
	else cout<<5;
}