#include<stdio.h>
int main()
{
	int n,i,j,max,count,b[2001],a[2001];
	scanf("%d", &n);
	for(i=1;i<=n;i++)
		scanf("%d", &a[i]);
	max=n;
	j=1;
	count=1;
	while(max!=0)
	{
		for(i=1;i<=n;i++)
		{
			if(a[i]==max)
			{
				b[i]=j;
				count++;

			}

		}
		j=count;
		max--;
	}
	for(i=1;i<=n;i++)
		printf("%d ",b[i]);
	return 0;
}
