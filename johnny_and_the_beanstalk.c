#include<stdio.h>
int main()
{
	int t,i,k,a[1000000],flag,flag1,p,x;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d", &k);
		for(i=0;i<k;i++)
			scanf("%d", &a[i]);
		flag=0;
		flag1=0;
		if((k==1)&&(a[0]==0))
			flag1=1;
		if((a[0]==0)&&(flag1!=1))
		{
			p=1;
			x=0;
			for(i=1;i<k;i++)
			{
				if(a[i]<=(2*(p-x)))
				{
					flag=0;
					p=2*(p-x);
					x=a[i];
					if(i==(k-1))
					{
						if(a[i]==p)
							flag=0;
						else
						{
							flag=1;
							break;
						}
					}
				}
				else
				{
					flag=1;
					break;
				}
			}
		}
		else if(a[0]==1)
		{
			for(i=1;i<k;i++)
			{
				if(a[i]==0)
					flag=0;
				else
				{
					flag=1;
					break;
				}
			}
		}
		else
			flag=1;
		if((flag==0)&&(flag1==0))
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}
