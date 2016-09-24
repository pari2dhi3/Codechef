#include<bits/stdc++.h>
using namespace std;
int main()
{
	int j,n,p,q,k,i;
	long long int sum;
	vector <int> a;
	cin >> n;
	j=n;
	while(j--)
	{
		cin >> p;
		a.push_back(p);
	}
	cin >> q;
	sort(a.begin(), a.end());
	while(q--)
	{
		sum=0;
		cin >> k;
		for(i=0;i<(n-k);i++)
		{
			sum=sum+a[i];
		}
		cout << sum << endl;
	}
	return 0;
}
