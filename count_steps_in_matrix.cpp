#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	vector< vector<int> > a( 250000, vector<int>(2,0));
	int n,i,y,row,col,steps,t,p,countc,countr;
	cin >> t;
	while(t--)
	{
		cin >> n;
		countc=1;
		countr=1;
		for(i=0;i<(n*n);i++)
		{
			cin >> p;
			p=p-1;
			if(countc>n)
			{
				countc=1;
				countr++;
			}
			a[p][1]=countc;
			a[p][0]=countr;
			countc++;
		}
		steps=0;
		for(i=1;i<(n*n);i++)
		{
			if((a[i][0]-a[i-1][0])>0)
				row=a[i][0]-a[i-1][0];
			else
				row=(a[i][0]-a[i-1][0])*(-1);
			if((a[i][1]-a[i-1][1])>0)
				col=a[i][1]-a[i-1][1];
			else
				col=(a[i][1]-a[i-1][1])*(-1);
			steps=steps+col+row;
		}
		cout << steps << endl;
	}
	return 0;
}
		
		
		
		
		
		
		








		
		
/*		k=1;
		steps=0;
		j=-1;
		for(i=0;i<n;i++)
		{
			j=find(a(i,0),a(i,n-1),k);
			if((k==1)&&(j!=-1))
			{
				x=i;
				y=j;
				k++;
				j=-1;
			}
			else if((j!=-1)&&(k!=1))
			{
				a=((x<i)?(i-x):(x-i));
				b=((y<j)?(j-y):(y-j));
				steps=steps+(a+b);
				x=i;
				y=j;
				k++;
				j=-1;
			}*/

			
