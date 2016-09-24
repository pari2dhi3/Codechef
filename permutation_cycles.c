#include<stdio.h>
int p[1001][1001];
int main()
{
	int n,i,j,c,r,flag,count,a[1001];
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		scanf("%d", &a[i]);
		for(j=1;j<=n;j++)
			p[i][j]=0;
	}
	flag=0;
	j=1;
	c=1;
	r=1;
	count=0;
	for(i=1;i<=n;i++)
	{
		j=i;
		flag=0;
		while(a[j]!=0)
		{
			flag=1;
			p[r][c]=j;
			j=a[j];
			a[p[r][c]]=0;
			c++;
		}
		if(flag==1)
		{
			r++;
			count++;
		}
		//j=i;
		c=1;
	}
	printf("%d\n", count);
	for(i=1;i<=count;i++)
	{
		for(j=1;;j++)
		{
			if(p[i][j]!=0)
				printf("%d ",p[i][j]);
			else
				break;
		}
		printf("%d\n",p[i][1]);
	}
	return 0;
}
		






