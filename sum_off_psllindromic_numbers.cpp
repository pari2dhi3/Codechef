#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	int x,t, i, l, r, j, flag, n, k, sum;
	vector <int> a(6,0);
	cin >> t;
	while(t--)
	{
		cin >> l;
		cin >> r;
		sum=0;
		for(j=l;j<=r;j++)
		{
			x=j;
			i=0;
			while(x!=0)
			{
				a[i]=x%10;
				x=x/10;
				i++;
			}
			flag=0;
			if(i==1)
				flag=0;
			else
			{
				n=i;
				i=(i/2)-1;
				flag=0;
				for(k=0;k<=i;k++)
				{
					if(a[k]!=a[(n-1)-k])
					{
						flag=1;
						break;
					}
				}
			}
			if(flag==0)
				sum=sum+j;
		}
		cout << sum << endl;
	}
	return 0;
}




