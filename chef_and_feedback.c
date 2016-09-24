#include<stdio.h>
#include<string.h>
int main()
{
	int t,flag,l,i;
	char a[100000];
	scanf("%d", &t);
	while(t--)
	{
		scanf("%s",a);
		l=strlen(a);
		flag=0;
		for(i=0;i<l;i++)
		{
			if((a[i]=='0')&&(a[i+1]=='1')&&(a[i+2]=='0'))
			{
				flag=1;
				break;
			}
			else if((a[i]=='1')&&(a[i+1]=='0')&&(a[i+2]=='1'))
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
			printf("Good\n");
		else
			printf("Bad\n");
	}
	return 0;
}

