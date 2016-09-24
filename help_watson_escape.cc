#include<bits/stdc++.h>
using namespace std;
int power(int x, unsigned int y)
{
    if( y == 0)
        return 1;
    else if (y%2 == 0)
        return ((power(x, y/2)%(1000000007))*(power(x, y/2)%(1000000007)))%(1000000007);
    else
        return ((x%(1000000007))*(power(x, y/2)%(1000000007))*(power(x, y/2)%(1000000007)))%(1000000007);
 
}
int main()
{
	ios_base::sync_with_stdio(false);
	long long int t,n,k,i,ans;
	cin >> t;
	while(t--)
	{
		cin >> n >> k;
		ans=power(k-1,n-1);
		ans=(ans*k)%(1000000007);
		cout << ans << endl;
	}
	return 0;
}
