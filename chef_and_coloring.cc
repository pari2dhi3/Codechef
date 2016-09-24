#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,t,n;
	char p;
	cin >> t;
	while(t--)
	{
		int rcount=0, bcount=0, gcount=0;
		vector<char> v;
		cin >> n;
		for(i=0;i<n;i++)
		{
			cin >> p;
			v.push_back(p);
		}
		for(i=0;i<n;i++)
		{
			if(v[i]=='R')
				rcount++;
			else if(v[i]=='G')
				gcount++;
			else
				bcount++;
		}
		if(rcount >= gcount && rcount >=bcount)
			cout << gcount+bcount;
		else if(gcount >= bcount && gcount >=rcount)
			cout << bcount+rcount;
		else
			cout << rcount+gcount;
		cout << endl;
	}
}
