#include <iostream>
#include <cstring>
using namespace std;
char a[1001];
int main()
{
	int s=0;
	cin.getline(a,1001);
	for(int i=0;i<strlen(a);i++)
	{
		if(a[i]==' '||a[i]=='\n'||a[i]==','||a[i]=='.'||a[i]==';'||a[i]=='?')
		{
			if(s)
			{
				cout<<endl;
				s=0;
			}
		}
		else
		{
			s=1;
			cout<<a[i];
		}
	}
	return 0;
}