#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	long long int t,n,p,q,count;
	long long int sum;
	cin >> t;
	while(t--)
	{
		q=0;
		count=0;
		sum=0;
		cin >> n;
		while(n--)
		{
			cin >> p;
			if(p>=q)
			{
				q=p;
				count++;
			}
			else
			{
				sum=sum+(count*(count+1))/2;
				count=1;
				q=p;
			}
		}
		sum=sum+(count*(count+1))/2;
		printf("%lld\n", sum);	
	}
	return 0;
}
