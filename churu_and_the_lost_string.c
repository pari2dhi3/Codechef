#include<stdio.h>
int main()
{
	int t,n,k,x,y,i,left,right;
	char a[2005];
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d %d", &n, &k);
		left=0;
		right=0;
		for(i=0;i<k;i++)
		{
			scanf("%d %d", &x, &y);
			a[x]=40;
			a[y]=41;
			if((x<n/2)&&(y<n/2))
				left++;
			else if((x>=n/2)&&(y>=x/2))
				right++;
		}
		for(i=0;i<(n/2);i++)
		{
			if(((a[i]==0)&&(a[i+1]==0))&&(right>0))
			{
				a[i]=40;
				a[i+1]=41;
				right--;
			}
			else if(a[i]==0)
				a[i]=40;
		}
		for(i=n/2;i<n;i++)
		{
			if(((a[i]==0)&&(a[i+1]==0))&&(left>0))
			{
				a[i]=40;
				a[i+1]=41;
				left--;
			}
			else if(a[i]==0)
				a[i]=41;
		}
		for(i=0;i<n;i++)
			printf("%c", a[i]);
		printf("\n");
	}
	return 0;
}

