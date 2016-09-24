#include<stdio.h>
int cmpfunc (const void * a, const void * b)
{
	   return ( *(int*)a - *(int*)b );
}
int main()
{
	int t, n, a[10000],i,c,count,max,v;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d", &n);
		i=0;
		while(i<n)
		{
			scanf("%d", &a[i]);
			i++;
		}
		i=0;
		qsort(a, n, sizeof(int), cmpfunc);
		/*i=0;
		while(i<n)
		{
			printf("%d", a[i]);
			i++;
		}*/
		i=0;
		c=a[0];
		count=0;
		max=0;
		while(i<n)
        	{
			if(c==a[i])
			{
				count++;
				if(count>max)
				{
					max=count;
					v=a[i];
				}
				i++;
			}
			else
			{
				c=a[i];
				count=0;
			}
		}
		printf("%d %d\n", v, max);
	}
	return 0;
}
					
