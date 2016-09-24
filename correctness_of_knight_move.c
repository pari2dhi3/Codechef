#include<stdio.h>
#include<string.h>
int main()
{
	int t,flag,l;
	char a[11], b[11];
	scanf("%d",&t);
	getchar();
	while(t--)
	{
		gets(a);
		l=strlen(a);
		flag=0;
		if(l==5)
		{
			if((a[0]>=97)&&(a[0]<=104))
			{
				flag=1;
				if((a[1]>=49)&&(a[1]<=56))
				{
					flag=1;
					if(a[2]==45)
					{
						flag=1;
						if(((a[3]>=97)&&(a[3]<=104))&&((a[4]>=49)&&(a[4]<=56)))
						{
							if(((a[0]+1)==a[3])&&((a[1]+2)==a[4]))
								printf("Yes\n");
							else if(((a[0]-1)==a[3])&&((a[1]+2)==a[4]))
								printf("Yes\n");
							else if(((a[0]+1)==a[3])&&((a[1]-2)==a[4]))
								printf("Yes\n");
							else if(((a[0]-1)==a[3])&&((a[1]-2)==a[4]))
								printf("Yes\n");
							else if(((a[0]+2)==a[3])&&((a[1]-1)==a[4]))
								printf("Yes\n");
							else if(((a[0]+2)==a[3])&&((a[1]+1)==a[4]))
								printf("Yes\n");
							else if(((a[0]-2)==a[3])&&((a[1]-1)==a[4]))
								printf("Yes\n");
							else if(((a[0]-2)==a[3])&&((a[1]+1)==a[4]))
								printf("Yes\n");
							else
								printf("No\n");
						}
						else
							flag=0;
					}
					else 
						flag=0;
				}
				else
					flag=0;
			}
			else 
				flag=0;
		}
		else
			flag=0;
		if(flag==0)
			printf("Error\n");
	}
	return 0;
}

