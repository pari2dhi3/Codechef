#include<stdio.h>
int a[2][100];
int main()
{
	int maximum,t,n,i,count,j,max;
	scanf("%d", &t);
	while(t--)
	{	
		scanf("%d", &n);
		max=0;
		for(i=0;i<n;i++)
		{
			scanf("%d", &a[0][i]);
			if(max<a[0][i])
				max=a[0][i];
		}
		for(i=0;i<n;i++)
			scanf("%d", &a[1][i]);
		count=0;
		maximum=0;
		for(i=1;i<=max;i++)
		{
			for(j=0;j<n;j++)
			{
				if(a[0][j]==i)
				{
					count++;
					if(maximum<count)
						maximum=count;
				}
				if(a[1][j]==i)
					count--;
			}
		}
		printf("%d\n", maximum);
	}
	return 0;
}


