#include<stdio.h>
int cmpfunc (const void * a, const void * b)
{
	return ( *(int*)b - *(int*)a );
}
int ncr(int n,int r)
{
	int y,res;
	if(r==0)
	{
		y=1;
		return y;
	}
	else if(n==r)
	{
		y=1;
		return y;
	}
	else
	{
		res=ncr(n-1,r-1)+ncr(n-1,r);
	}
	return res;
}     
int main()
{
	int count,ways,j,same,i,t,a[100],k;
	scanf("%d", &t);
	while(t--)
	{
		for(i=0;i<11;i++)
			scanf("%d", &a[i]);
		scanf("%d", &k);
		qsort(a, 11, sizeof(int), cmpfunc);
		ways=1;
		count=0;
		for(i=0;i<k;i++)
		{
			same=1;
			if(a[i]>a[i+1])
			{
				count++;
				ways=1;
			}
			else 
			{
				for(j=i+1;j<11;j++)
				{
					if(a[i]==a[j])
						same++;
					else
					{
						break;
					}
				}
				if((k-count)<same)
				{
					ways=ncr(same,(k-count));
					break;
				}
				else
				{
					count=count+same;
					ways=1;
					i=i+same-1;
				}
			}
		}
		printf("%d\n", ways);
	}
	return 0;
}
