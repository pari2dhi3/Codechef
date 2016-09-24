#include<stdio.h>
#include<string.h>
int main()
{
	int i,t,l,flag;
	char x[11], y[11];
	scanf("%d", &t);
	while(t--)
	{
		scanf("%s %s", x,y);
		l=strlen(x);
		flag=0;
		for(i=0;i<l;i++)
		{
			if((x[i]!=y[i])&&((x[i]!=63)&&(y[i]!=63)))
			{
			//	if((x[i]!=63)&&(y[i]!=63))
			//	{
					flag=1;
					break;
			//	}
			}
		}
		if(flag==1)
			printf("No\n");
		else
			printf("Yes\n");
	}
	return 0;
}
