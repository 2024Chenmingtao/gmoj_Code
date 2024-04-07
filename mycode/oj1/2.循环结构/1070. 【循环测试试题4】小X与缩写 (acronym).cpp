#include<bits/stdc++.h>
using namespace std;
int i=0;
char c[10000];
int main()
{
 i++;
 c[i]=getchar();
 while(c[i]!='\n')
 {
  if (c[i]!='(')
  {
   cout<<c[i];
  }
  else
  {
   while (c[i]!=')')
   {
       i++;
    c[i]=getchar();
    if ((c[i-1]==32||c[i-1]=='(')&&c[i]!=')')
    {
     if (c[i]>'Z')cout<<char(c[i]-32);
     else cout<<c[i];
    }    
   }
  }
  i++;
  c[i]=getchar();
 }
}