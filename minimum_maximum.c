#include<stdio.h>
#include<stdlib.h>
int cmpfunc (const void * a, const void * b)
{
	   return ( *(int*)a - *(int*)b );
}

int main()
{
	long long int t,n,a[50000],i,cost;
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%lld", &n);
		for(i=0;i<n;i++)
		{
			scanf("%lld", &a[i]);
		}
		qsort(a,n , sizeof(long long int), cmpfunc);
		cost=a[0]*(n-1);
		printf("%lld\n", cost);
	}
	return 0;
}

