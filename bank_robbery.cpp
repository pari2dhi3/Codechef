#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	int t,m;
	double p;
	float sum,chef,other;
	cin >> t;
	while(t--)
	{
		cin >> m >> p;
		sum=(1000000000*(pow(p,(double)m-1)));
		if((m%2!=0))
		{
			chef=sum;
			other=(1000000000-sum);
		}
		else
		{
			other=sum;
			chef=(1000000000-sum);
		}
		printf("%0.2f %0.2f\n", chef, other);

	}
	return 0;
}


