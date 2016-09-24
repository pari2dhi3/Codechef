#include<stdio.h>
int main()
{
	int t,n,k,i,x,y,j;
	char a[2005];
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d %d", &n, &k);
		for(i=0;i<n;i++)
			a[i]=0;
		for(i=0;i<k;i++)
		{
			scanf("%d %d", &x, &y);
			a[x]=40;
			a[y]=41;
			for(j=x+1;j<y;)
			{
				a[j]=40;
				a[j+1]=41;
				j=j+2;
			}
		}
		for(i=0;i<n/2;i++)
		{
			if(a[i]==0)
				a[i]=40;
		}
		for(i=n/2;i<n;i++)
		{
			if(a[i]==0)
				a[i]=41;
		}
		for(i=0;i<n;i++)
			printf("%c", a[i]);
		printf("\n");
	}
	return 0;
}
