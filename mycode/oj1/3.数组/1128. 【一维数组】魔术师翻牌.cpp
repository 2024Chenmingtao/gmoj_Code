#include <bits/stdc++.h>
using namespace std;
int a[1001];
int main()
{
    int i,n,j=1;
    int b;
    cin>>b;
    for (i=1;i<=b;i++)
    {
        n=1;
        do
        {
            if (j>b)
			{
				j=1;
			}
            if (a[j])
			{
				j++;
			} 
            else
            {
                if (n==i) 
				{
					a[j]=i;
				}
                j++;
                n++;
            }
        }
        while (n<=i);
    }
    for (i=1;i<=b;i++)
        printf("%d ",a[i]);
    return 0;
}