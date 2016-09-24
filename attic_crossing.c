#include<stdio.h>
#include<string.h>
int main()
{
	int t,len,max,flag,count,day,i;
	char s[1000003];
	scanf("%d", &t);
	while(t--)
	{
		scanf("%s", s);
		len=strlen(s);
		max=0;
		flag=0;
		count=0;
		day=0;
		for(i=0;i<len;i++)
		{
			if(s[i]=='.')
			{
				count++;
				if(max<count)
				{
					max=count;
					flag=1;
				}
			}
			else
			{
				if(flag==1)
					day++;
				flag=0;
				count=0;
			}
		}
		printf("%d\n", day);
	}
	return 0;
}





