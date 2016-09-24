#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	long long int t,clr,i,k;
	cin >> t;
	while(t--)
	{
		vector<int> c;
		long long int ans;
		for(i=0;i<3;i++)
		{
			cin >> clr;
			c.push_back(clr);
		}
		cin >> k;
		sort (c.begin(), c.end());
		//for(i=0;i<3;i++)
		//	cout << c[i] << "  ";
		if(k>c[1] && k<=c[2])
			ans=c[0]+c[1]+k;
		else if(k>c[0] && k<=c[1])
			ans= c[0]+2*k-1;
		else
			ans=3*(k-1)+1;
		cout << ans <<"\n";
	}
return 0;
}
