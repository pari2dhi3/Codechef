#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	long long int n,m;
	cin >> t;
	while(t--)
	{
		cin >> n >> m;
		if(n==1 && m==2 || m==1 && n==2)
			cout << "Yes\n";
		else if(n==1 || m==1)
			cout << "No\n";
		else if(n%2==0 || m%2==0)
			cout << "Yes\n";
		else
			cout << "No\n";
	}
return 0;
}
