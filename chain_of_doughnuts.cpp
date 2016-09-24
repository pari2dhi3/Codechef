#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	int n,t,m,i,p,count,j,sum;
	vector<int> a(2*10000 ,0);
	cin >> t;
	while(t--)
	{
		cin >> n >> m;
		for(i=0;i<m;i++)
		{
			cin >> p;
			a[i]=p;
		}
		sort (a.begin(), a.begin()+m);
		i=0;
		count=0;
		sum=a[m-1];
		if(m==1)
			cout << '0' << endl;
		else
		{
			j=m-2;
			while(j>i)
			{
				sum=sum+a[j]+1;
				j--;
				a[i]--;
				count++;
				if(a[i]==0)
					i=i+1;
			}
			if(((j+1)==i)&&(a[j]==0))
				cout << count << endl;
			else
				cout << count+1 << endl;
		}
		for(i=0;i<m;i++)
			a[i]=0;
	}
	return 0;
}

				

































