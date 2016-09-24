#include<stdio.h>
#include<string.h>
int main()
{
	int t,l,b[26],c[26],i,flag;
	char s[1000];
	scanf("%d", &t);
	while(t--)
	{
		scanf("%s",s);
		l=strlen(s);
		for(i=0;i<26;i++)
		{
			b[i]=0;
			c[i]=0;
		}
		if(l%2==0)
		{
			for(i=0;i<(l/2);i++)
			{
				b[s[i]-97]++;
				c[s[(l/2)+i]-97]++;
			}
		}
		else
		{
			for(i=0;i<(l/2);i++)
			{
				b[s[i]-97]++;
				c[s[(l/2)+1+i]-97]++;
			}
		}
		flag=0;
		for(i=0;i<26;i++)
		{
			if(b[i]!=c[i])
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
