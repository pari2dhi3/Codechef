#include<stdio.h>
#include<stdlib.h>
int cmpfunc (const void * a, const void * b)
{
	return ( *(int*)a - *(int*)b );
}
int main()
{
	int n,a[2000],i,j,l,count;
	scanf("%d", &n);
	while(n!=0)
	{
		for(i=0;i<n;i++)
			scanf("%d", &a[i]);
		qsort(a, n, sizeof(int), cmpfunc);	
		count=0;
		for(i=(n-1);i>1;i--)
		{
			l=0;
			for(j=(i-1);j>l;)
			{
				if((a[l]+a[j])<a[i])
				{
					count=count+j-l;
					l++;
				}
				else
					j--;
			}
		}
		printf("%d\n", count);
		scanf("%d", &n);
	}
	return 0;
}

