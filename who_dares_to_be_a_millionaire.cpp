#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,i,count,max,q,w[1005];
	char p, a[1005], b[1005];
	cin >> t;
	while(t--)
	{
		cin >> n;
		cin >> a;
		cin >> b;
		count=0;
		for(i=0;i<n;i++)
		{
			if(b[i]==a[i])
				count++;
		}
		for(i=0;i<=n;i++)
		{
			cin >> w[i];
		}
		max=0;
		q=0;
		if(count==n)
			cout << w[n] << endl;
		else if(count==0)
			cout << w[0] << endl;
		else
		{
			for(i=0;i<=count;i++)
			{
				if(w[i]>max)
					max=w[i];
			}
			cout << max << endl;
		}
	}
	return 0;
}
