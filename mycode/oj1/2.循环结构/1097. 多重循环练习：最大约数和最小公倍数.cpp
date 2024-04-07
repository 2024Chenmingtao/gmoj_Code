#include<iostream>
using namespace std;
int main()
{
    int a,b,i,c,s;
    cin>>a>>b;
    c=a%b;
    s=a*b;
    while(a%b!=0)
    {
        a=b;
        b=c;
        c=a%b;
    }
    cout<<b<<" "<<s/b;
    return 0;
}