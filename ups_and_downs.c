#include<stdio.h>
int cmpfunc (const void * a, const void * b)
{
	   return ( *(int*)a - *(int*)b );
}
int main()
{
	int t,n,a[100000],b[100000],i,j;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d", &n);
		for(i=0;i<n;i++)
			scanf("%d", &a[i]);
		qsort(a, n , sizeof(int), cmpfunc);
		j=0;
		for(i=0;i<n;i=i+2)
		{
			b[i]=a[j];
			j++;
		}
		j=n-1;
		for(i=1;i<n;i=i+2)
		{
			b[i]=a[j];
			j--;
		}
		for(i=0;i<n;i++)
			printf("%d ",b[i]);
		printf("\n");
	}
	return 0;
}



