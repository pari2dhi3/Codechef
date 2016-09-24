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
	char s[7];
	scanf("%d %d", &n,&q);
	i=0;
	j=0;
	while(q--)
	{
		scanf("%s", s);
		if(strcmp(s,"RowAdd")==0)
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
	qsort(r,n, sizeof(int), cmpfunc);
	qsort(c,n, sizeof(int), cmpfunc);
	printf("Row : ");
	for(i=0;i<n;i++)
	{
		printf("%lld ",r[i]);
	}
	printf("\n");
	printf("coulumn : ");
	for(i=0;i<n;i++)
	{
		printf("%lld ",c[i]);
	}
	printf("\n");
	printf("%lld\n", r[0]+c[0]);
	return 0;
}



			
			
			
			
			
			
			
			
			
			
			/*		for(i=0;i<n;i++)
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
*/	


