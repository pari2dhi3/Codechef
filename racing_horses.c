#include<stdio.h>
int main()
{
	int t, n, a[5000],i,diff,w,j;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d", &n);
		for(i=0;i<n;i++)
			scanf("%d", &a[i]);
		diff=1000000000;
		for(i=0;i<n;i++)
		{	
			for(j=i+1;j<n;j++)
			{
				w=a[i]-a[j];
				if(w>=0)
				{
					if(w<=diff)
						diff=w;
				}
				if(w<=0)
				{
					w=w*(-1);
					if(w<=diff)
						diff=w;
				}
			}
		}
		printf("%d\n", diff);

	}
	return 0;
}

