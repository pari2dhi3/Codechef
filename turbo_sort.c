#include<stdio.h>
#include<stdlib.h>
int cmpfunc (const void * a, const void * b)
{
	   return ( *(int*)a - *(int*)b );
}
int main()
{
	int t,w[1000000],i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d",&w[i]);
	}
	qsort(w,t,sizeof(int),cmpfunc);
	for(i=0;i<t;i++)
	{
		printf("%d\n",w[i]);
	}
	return 0;
}

