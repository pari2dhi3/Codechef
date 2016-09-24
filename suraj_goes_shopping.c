#include<stdio.h>
#include<stdlib.h>
int cmpfunc (const void * a, const void * b)
{
	   return ( *(int*)b - *(int*)a );
}
int main()
{
	int t,n,w,i,a[10001];
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d", &n);
		for(i=0;i<n;i++)
		{
			scanf("%d", &a[i]);
		}
		qsort(a,n, sizeof(int), cmpfunc);
		w=0;
		i=0;
		while(i<n)
		{
			w=w+a[i]+a[i+1];
			i=i+4;
		}
		printf("%d\n", w);
		for(i=0;i<n;i++)
			a[i]=0;
	}
	return 0;
}
		
