#include<stdio.h>
int a[1000000];
int main()
{
	int p,t,n,height,l,h,i,j,sum,max,ans;
	scanf("%d", &t);
	p=0;
	while(t--)
	{
		scanf("%d %d", &n, &height);
		for(i=0;i<n;i++)
		{
			scanf("%d %d", &l,&h);
			for(j=(l+p);j<=(h+p);j++)
				a[j]++;
		}
		sum=0;
		max=0;
		for(i=p;i<=(height-1+p);i++)
			sum=sum+a[i];
		max=sum;
		i=height+p;
		while(i<(n+p))
		{
			sum=sum+a[i];
			sum=sum-a[i-height];
			if(sum>max)
				max=sum;
			i++;
		}
		ans=((n*height)-max);
		printf("%d\n", ans);
		p=p+n;
	}
	return 0;
}

