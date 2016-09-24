#include<stdio.h>
int main()
{
	int t, a[10],i,j,w,flag,k;
	scanf("%d", &t);
	while(t--)
	{
		for(i=0;i<10;i++)
			scanf("%d", &a[i]);
		flag=0;
		i=0;
		while(i<=8)
		{
			for(j=0;j<10;j++)
			{	
				if((a[j]==i)&&j>0)
				{
					for(w=0;w<=i;w++)
					{
						printf("%d",j);
					}
					printf("\n");
					flag=1;
					break;
				}
			}
			if((a[0]==i)&&(flag!=1))
			{
				for(k=1;k<10;k++)
				{
					if(a[k]>i)
					{
						printf("%d", k);
						for(w=0;w<=i;w++)
							printf("%d",0);
						printf("\n");
						flag=2;
						break;
					}
				}
			}
			if(flag==1||flag==2)
				break;
			i++;
		}
	}
	return 0;
}

