#include<iostream>
#include<string>
using namespace std;
int main()
{
	int s = 0;
	bool flag= false;
	string a;
	cin >> a;
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i] >= '0' && a[i] <= '9')
		{
			flag = true;
			cout << a[i];
		}
		else
		{
			if (flag)
			{
				flag = false;
				cout << endl;
				s++;
			}
		}
	}
	if (flag)cout << endl;
	cout << s;
	return 0;
}