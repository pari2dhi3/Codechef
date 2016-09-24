#include<stdio.h>
int main()
{
	int t,n,i,j,a[100],flag;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d", &n);
		for(i=0;i<n;i++)
			scanf("%d", &a[i]);
		flag=0;
		for(i=0;i<n-1;i++)
		{
	//		if(a[i]>a[i+1])
			{
				for(j=i+2;j<n;j++)
				{
					if(a[i]>a[j])
					{
						printf("NO\n");
						flag=1;
						break;
					}
				}
				if(flag==1)
					break;
			}
		}
		if(flag==0)
			printf("YES\n");
	}
	return 0;
}
