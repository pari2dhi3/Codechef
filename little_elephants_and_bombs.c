#include<stdio.h>
int main()
{
	int t,n,i,count,a[1000];
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d", &n);
		for(i=0;i<n;i++)
			scanf("%d", &a[i]);
		for(i=1;i<(n-2);i++)
		{
			if(a[i]==1)
			{
				a[i]=-1;
				a[i-1]=-1;
				a[i+1]=-1;
			}
		}
		if(a[0]==1)
		{
			a[0]=-1;
			a[1]=-1;
		}
		if(a[n-1]==1)
		{
			a[n-1]=-1;
			a[n-2]=-1;
		}
		count=0;
		for(i=0;i<n;i++)
		{
			if(a[i]==0)
				count++;
		}
		printf("%d\n", count);
	}
	return 0;
}


