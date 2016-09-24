#include<stdio.h>
int cmpfunc (const void * a, const void * b)
{
	return ( *(int*)a - *(int*)b );
}
int main()
{
	int n,q;
	scanf("%d %d", &n, &q);
	while(q--)
	{
		scanf("%s", &s);
		if(strcmp(s,"RowAdd")==0)
		{
			scanf("%d %d", &r, &x);
			for(i=0;i<n;i++)
			{
				a[r-1][i]=a[r-1][i]+x;
			}
		}
		else
		{
			scanf("%d %d", &c, &x);
			for(i=0;i<n;i++)
			{
				a[i][c-1]=a[i][c-1]+x;
			}
		}
	}
	max=0;
	for(i=0;i<n;i++)
	{
		qsort(a[i], n, sizeof(int), cmpfunc);
		l=a[0];
		if(l<max)
			max=l;
	}
	printf("%lld\n", max);
}
return 0;
}
