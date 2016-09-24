#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int cmpfunc (const void * a, const void * b)
{
	return ( *(int*)b - *(int*)a );
}
int main()
{
	int n,q,w,i,j,x;
	long long int r[314159],c[314159];
	char s[10];
	scanf("%d %d", &n,&q);
	for(i=0;i<n;i++)
	{
		r[i]=0;
		c[i]=0;
	}
	while(q--)
	{
		scanf("%s", s);
		if(strcmp(s,"RowAdd"))
		{
			scanf("%d %d", &w, &x);
			r[w-1]=r[w-1]+x;
		}
		else
		{
			scanf("%d %d", &w, &x);
			c[w-1]=c[w-1]+x;	
		}
	}
	qsort(r,n, sizeof(long long int), cmpfunc);
	qsort(c, n, sizeof(long long int), cmpfunc);
	printf("%lld\n", r[0]+c[0]);
	return 0;
}
