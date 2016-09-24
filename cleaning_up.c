#include<stdio.h>
int cmpfunc (const void * a, const void * b)
{
	   return ( *(int*)a - *(int*)b );
}
int a[1001],b[1001];
int main()
{
	int z,t, n, m, i,j,count,w;
	scanf("%d", &t);
	while(t--)
	{
		for(i=0;i<1001;i++)
		{
			a[i]=0;
			b[i]=0;
		}
		scanf("%d %d", &n, &m);
		w=n-m;
		for(i=0;i<m;i++)
		{
			scanf("%d",&a[i]);
		}
		qsort(a, m, sizeof(int), cmpfunc);
		count=1;
		j=0;
		z=0;
		for(i=0;i<n;i++)
		{
			if(a[z]==count)
			{
				count++;
				z++;
			}
			else
			{
				b[j]=count;
				j++;
				count++;
			}
		}
		//j=0;
		for(i=0;i<j;)
		{
			printf("%d ", b[i]);
			i=i+2;
		}
		printf("\n");
		//j=1;
		for(i=1;i<j;)
		{
			printf("%d ", b[i]);
			i=i+2;
		}
		printf("\n");
	}
	return 0;
}
