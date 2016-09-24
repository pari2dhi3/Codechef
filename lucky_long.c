#include<stdio.h>
#include<string.h>
int main()
{
	int t,i,count,n,flag;
	char s[100005];
	scanf("%d", &t);
	while(t--)
	{
		count=0;
		scanf("%s", s);
		n=strlen(s);
		flag=0;
		for(i=0;i<n;i++)
		{
			if((s[i]!='4')&&(s[i]!='7'))
				count++;
		}
		printf("%d\n", count);
	}
	return 0;
}

				



