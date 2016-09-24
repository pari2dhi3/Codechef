#include<stdio.h>
#include<string.h>
int main()
{
	int t,l1,l2,i,k,count;
	char j[101],s[101];
	scanf("%d", &t);
	while(t--)
	{
		scanf("%s", j);
		scanf("%s", s);
		l1=strlen(j);
		l2=strlen(s);
		count=0;
		for(i=0;i<l2;i++)
		{
			for(k=0;k<l1;k++)
			{
				if(s[i]==j[k])
				{
					count++;
					break;
				}
			}
		}
	printf("%d\n",count);
	}
	return 0;
}
