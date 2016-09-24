#include<stdio.h>
#include<string.h>
int main()
{
	int i,t,a[26],len,count;
	char s[100005];
	scanf("%d", &t);
	while(t--)
	{
		for(i=0;i<26;i++)
			a[i]=0;
		scanf("%s", s);
		len=strlen(s);
		for(i=0;i<len;i++)
		{
			a[s[i]-97]++;
		}
		count=0;
		for(i=0;i<26;i++)
		{
			if(a[i]!=0)
				count++;
		}
		if(count%2==0)
			printf("Terrorist\n");
		else
			printf("Counter Terrorist\n");
	}
	return 0;
}
