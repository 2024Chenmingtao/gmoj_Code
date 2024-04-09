#include <iostream>
#include <string>
using namespace std;
int main()
{
	string a[2001];
	int n,s=0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; i++)
	{
		s += a[i].size();
	}
	cout << s / n;
	return 0;
}