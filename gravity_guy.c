#include<stdio.h>
#include<string.h>
int main()
{
	int t,i,l,flag,flag2,count1,count2;
	char s1[200005],s2[200005];
	scanf("%d", &t);
	while(t--)
	{
		scanf("%s %s", s1, s2);
		l=strlen(s1);
		flag2=0;
		if(s1[0]==46)
		{
			count1=0;
			flag=0;
			for(i=0;i<l;i++)
			{
				if(flag==0)
				{
					if((s1[i+1]==35)&&(s2[i+1]==46))
					{
						count1++;
						flag=1;
					}
					else if((s1[i+1]==35)&&(s2[i+1]==35))
					{
						flag2=1;
						break;
					}
				}
				if(flag==1)
				{
					if((s2[i+1]==35)&&(s1[i+1]==46))
					{
						count1++;
						flag=0;
					}
					else if((s2[i+1]==35)&&(s1[i+1]==35))
					{
						flag2=1;
						break;
					}
				}
			}
		}
		if((s2[0]==46)&&(flag2!=1))
		{
			count2=0;
			flag=0;
			for(i=0;i<l;i++)
			{
				if(flag==0)
				{
					if((s2[i+1]==35)&&(s1[i+1]==46))
					{
						count2++;
						flag=1;
					}
					else if((s2[i+1]==35)&&(s1[i+1]==35))
					{
						flag2=1;
						break;
					}
				}
				if(flag==1)
				{
					if((s1[i+1]==35)&&(s2[i+1]==46))
					{
						count2++;
						flag=0;
					}
					else if((s2[i+1]==35)&&(s1[i+1]==35))
					{
						flag2=1;
						break;
					}
				}
			}
		}
		if((s1[0]==35)&&(s2[0]==35))
			flag2=1;
		if(flag2==0)
		{
			printf("Yes\n");
			if((s1[0]==35)&&(s2[0]==46))
				printf("%d\n", count2);
			else if((s1[0]==46)&&(s2[0]==35))
				printf("%d\n", count1);
			else
			{
				if(count1<=count2)
					printf("%d\n", count1);
				else
					printf("%d\n", count2);
			}
		}
		else
		{
			printf("No\n");
			printf("\n");
		}
	}
	return 0;
}
