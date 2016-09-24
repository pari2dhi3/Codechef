#include<bits/stdc++.h>
using namespace std;
int a[1002][1002];
int main()
{
	int n,m,i,num,l,r,x,flag,q,sum;
	cin >> n >> m;
	while(m--)
	{
		cin >> num;
		if(num==0)
		{
			cin >> l >> r >> x;
			for(i=l;i<=r;i++)
				a[x][i]=1;
		}
		else if(num==1)
		{
			sum=0;
			cin >> q;
			for(i=0;i<n;i++)
				sum=sum+a[i+1][q];
			cout << sum << endl;
		}
	}
	return 0;
}


