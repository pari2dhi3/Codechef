#include<stdio.h>
#include<stdlib.h>
int cmpfunc (const void * a, const void * b)
{
	   return ( *(int*)a - *(int*)b );
}
int main()
{
	int t,n,p[100],cr[100],i,j,count;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
			scanf("%d", &p[i]);
		for(i=0;i<n;i++)
			scanf("%d", &cr[i]);
		qsort(p, n, sizeof(int), cmpfunc);
		qsort(cr, n, sizeof(int), cmpfunc);
		i=0;
		j=0;
		count=0;
		while(i<n)
		{
			if(cr[i]>=p[j])
			{
				i++;
				j++;
				count++;
			}
			else
				i++;
		}
		printf("%d\n", count);
	}
	return 0;
}


