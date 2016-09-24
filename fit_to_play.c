#include<stdio.h>
int main()
{
	int t,n,a[100000],max,diff,i,j;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d", &n);
		scanf("%d", &a[0]);
		max=0;
		diff=0;
		for(i=1;i<n;i++)
		{
	
			scanf("%d", &a[i]);
			for(j=i-1;j>=0;j--)
			{
				diff=a[i]-a[j];
				if(max<diff)
					max=diff;
			}
		}
	/*	max=0;
		diff=0;
		for(i=0;i<k;i++)
		{
			for(j=i;j<k;j++)
			{
				if(a[j]>a[i])
				{
					diff=a[j]-a[i];
					if(max<diff)
						max=diff;
				}
			}
		}
	*/	if(max!=0)
			printf("%d\n", max);
		else
			printf("UNFIT\n");
	
	}
	return 0;
}


