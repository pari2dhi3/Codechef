#include<stdio.h>
#include<stdlib.h>
int cmpfunc (const void * a, const void * b)
{
	   return ( *(int*)a - *(int*)b );
}
int main()
{
	int t,n,k,i,w[100],s,d,diff;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d %d", &n, &k);
		for(i=0;i<n;i++)
			scanf("%d", &w[i]);
		qsort(w, n, sizeof(int), cmpfunc);
		s=0;
		d=0;
		diff=0;
		if(k<=(n-k))
		{
			for(i=0;i<k;i++)
				s=s+w[i];
			for(i=k;i<n;i++)
				d=d+w[i];
			diff=d-s;
		}
		if(k>(n-k))
		{
			for(i=0;i<(n-k);i++)
				s=s+w[i];
			for(i=(n-k);i<n;i++)
				d=d+w[i];
			diff=d-s;
		}
		printf("%d\n", diff);
	}
	return 0;
}

		


