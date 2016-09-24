#include<stdio.h>
#include<stdlib.h>
int cmpfunc (const void * a, const void * b)
{
	   return ( *(int*)a - *(int*)b );
}
int main()
{
	int t,n,a[100001],i,j; 
	for(i=0;i<100000;i++)
		a[i]=0;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d", &n);
		for(i=0;i<n;i++)
			scanf("%d", &a[i]);
		qsort(a, n, sizeof(int), cmpfunc);
		i=0;
		while(i<n)
		{
			j=i+1;
			while(a[i]==a[j])
			{
				a[j]=0;
				j++;
			}
			i=j;
			j=i+1;
		}
		qsort(a, n, sizeof(int), cmpfunc);
		for(i=0;i<n;i++)	
		{
			if(a[i]!=0)
				break;
		}
		printf("%d\n", n-i);
	}
	return 0;
}


