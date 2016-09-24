#include<stdio.h>
int cmpfunc (const void * a, const void * b)
{
	   return ( *(int*)a - *(int*)b );
}
int main()
{
	int n,a[1000000],count,i,j,l,flag,sum;
	while(1)
	{
		scanf("%d", &n);
		if(n!=0)
		{
			for(i=0;i<n;i++)
				scanf("%d", &a[i]);
			qsort(a, n, sizeof(int), cmpfunc);
			count=0;
			flag=0;
			for(i=n-1;i>1;i--)
			{
				for(j=i-1;j>0;j--)
				{
					for(l=j-1;l>=0;l--)
					{
						if(a[l]+a[j]<a[i])
						{
							if(l+1==j)
							{
								sum=0;
								sum=j*(j+1);
								sum=sum/2;
								count=count+sum;
								flag=1;
								break;
							}
							else
							{
								count=count+l+1;
								break;
							}
						}
					}
					if(flag==1)
					{
						flag=0;
						break;
					}
				}
			}
			printf("%d\n", count);
		}
		else
			break;
	}
	return 0;
}
