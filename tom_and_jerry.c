#include<stdio.h>
#include<stdlib.h>
int cmpfunc (const void * a, const void * b)
{
	   return ( *(int*)a - *(int*)b );
}
int main()
{
	int t,n,k,a[10000],b[10000],i,j,sum,zero,sum1,flag;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d %d", &n, &k);
		for(i=0;i<n;i++)
		{
			scanf("%d", &a[i]);
		}
		sum=0;
		for(i=0;i<k;i++)
		{
			scanf("%d", &b[i]);
			sum=sum+b[i];
			for(j=0;j<n;j++)
			{
				if(a[j]==b[i])
				{
					a[j]=0;
					break;
				}
			}
		}
		qsort(a,n,sizeof(int),cmpfunc);
		for(i=0;i<n;i++)
		{
			if(a[i]==0)
			{
				zero=i;
				break;
			}
		}
		sum1=0;
		flag=0;
		if(sum==0)
			printf("YES\n");
		else if(sum>0)
		{
			for(i=zero;i>=0;i--)
			{
				if(sum1*(-1)<sum)
				{
					sum1=sum1+a[i];
					flag=1;
				}
				else if(sum1*(-1)==sum)
					break;
				else
				{
					flag=1;
					break;
				}
			}
		}
		else if(sum<0)
		{
			for(i=zero;i<n;i++)
			{
				if(sum1<sum*(-1))
				{
					sum1=sum1+a[i];
					flag=1;
				}
				else if(sum1==sum*(-1))
					break;
				else
				{
					flag=1;
					break;
				}
			}
		}
		if(flag==1)
			printf("NO\n");
		else
			printf("YES\n");
	}
	return 0;
}







