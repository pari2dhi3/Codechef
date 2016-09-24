#include<stdio.h>
int main()
{
	int t,a[100000],i,p,n,q;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d", &n);
		q=0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=(n-1);i>0;i--)
		{
			p=a[i];
			if(p>q)
			{
				q=p;
			}
			else
				q++;
		}
		printf("%d\n", q+1);
	}
	return 0;
}


