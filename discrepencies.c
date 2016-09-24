#include<stdio.h>
#include<stdlib.h>
int a[2][150004];
int cmpfunc (const void * x, const void * b)
{
	   return ( *(int*)x - *(int*)b );
}
int binary(int l,int u,int m)
{
	int mid,c=0;
	if(l<=u)
	{
		mid=(l+u)/2;
		if(m==a[0][mid])
		{
			c=1;
			a[1][mid]++;
			printf("a[1][%d] = %d ",mid,a[1][mid]);
		}
		else if(m<a[0][mid])
			return binary(l,mid-1,m);
		else
			return binary(mid+1,u,m);
	}
	else
		return -1;
}
int main()
{
	int n1,n2,n3,t,i,l,u,m,c,j,count;
	scanf("%d %d %d",&n1,&n2,&n3);
	i=n1;
	while(n1--)
	{
		scanf("%d",&a[0][i-n1]);
		a[1][i-n1]=1;
	}
	l=a[0][0];
	u=a[0][n1-1];
	t=n2+n3;
	while(t--)
	{
		scanf("%d", &m);
		c=binary(l,u,m);
		if(c==-1)
		{
			a[0][i]=m;
			a[1][i]=1;
			printf("i = %d\n",i);
			qsort(a,i+1,sizeof(int),cmpfunc);
			u=a[0][i];
			l=a[0][0];
			i++;
		}
	}
	count=0;
	for(j=0;j<150000;j++)
	{
		if(a[1][j]>=2)
			count++;
	}
	printf("%d\n", count);
	for(j=0;j<150000;j++)
	{
		if(a[1][j]>=2)
		{
			printf("%d\n", a[0][j]);
		}
	}
	return 0;
}
	

