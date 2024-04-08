#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x, n, sum = 0, sum1 = 0, sum2 = 0,  sum3 = 0, sum4 = 0;
	cin >> n;
	for (int i = 1;i <= n; i++)
	{
		cin >> x;
		if (x >= 0 && x <= 59)
		{
			sum++;
		}
		if (x >= 60 && x <= 69)
		{
			sum1++;
		}
		if (x >= 70 && x <= 79)
		{
			sum2++;
		}
		if (x >= 80 && x <= 89)
		{
			sum3++;
		}
		if (x >= 90 && x <= 100)
		{
			sum4++;
		}
	}
	cout << sum4 << endl  << sum3 << endl << sum2 << endl << sum1 << endl << sum;
	return 0;
}