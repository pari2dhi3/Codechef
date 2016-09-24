#include<bits/stdc++.h>
using namespace std;
bool check_row(vector<string>  ,int i, int n, int k)
{
	int j,count=0;
	for(j=0;j<n;j++)
	{
		if(a[i][j]=='X')
		{
			count++;
			if(count>=k)
				return true;
			if((j+1)<n && (count==(k-1) && a[i][j+1]=='.'))
				return true;
		}
		else
		{
			count=0;
		}
	}
	return false;
}
bool check_col(vector<string> ,int j, int n, int k)
{
	int i,count=0;
	for(i=0;i<n;i++)
	{
		if(a[i][j]=='X')
		{
			count++;
			if(count>=k)
				return true;
			if((i+1<n) && (count==(k-1) && a[i+1][j]=='.'))
				return true;
		}
		else
			count=0;
	}
	return false;
}
bool check_diag(vector<string> , int i, int j, int n, int k)
{
	for(i=0;i<n;)
	{
		for(j=0;j<n;)
		{
			if(a[i][j]=='X')
			{
				count++;
				if(count>=k)
					return true;
				if((((i+1<n && j+1< n)&&(a[i+1][j+1]=='.'))||((i-1>0 && j-1>0)&&(a[i-1][j-1]=='.')))&&(count==(k-1)))
					return true;
			}
			else
			{
				count=0;
			}
			i++;
			j++;
		}
	}
	count=0;
	for(i=(n-1);i>0;)
	{
		for(j=0;j<n;)
		{
			if(a[i][j]=='X')
			{
				count++;
				if(count>=k)
					return true;
				if((((i+1<n && j-1>0)&&(a[i+1][j-1]=='.'))||((i-1>0 && j+1<n)&&(a[i-1][j+1]=='.')))&&(count==(k-1)))
					return true;
			}
			else
			{
				count=0;
			}
			j++;
			i--;
		}
	}

int main()
{
	ios_base::sync_with_stdio(false);
	int t,n,k;
	vector<string> a;
	cin >> t;
	while(t--)
	{
		cin >> n >> k;
		a.resize(n);
		for(j=0;j<n;j++)
		{
			cin >> a[j];
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(a[i][j]=='.')
				{
					if(check_row(a,i,n,k) || check_col(a,j,n,k) || check_diag(a,i,j,n,k))
					{
						flag=1;
						cout << "YES\n";
						break;
					}
				}
			}
			if(flag==1)
				break;
		}
		if(flag==0)
			cout << "NO\n";
	}
	return 0;
}
