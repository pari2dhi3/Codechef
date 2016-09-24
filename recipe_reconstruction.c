#include<stdio.h>
#include<string.h>
int main()
{
	int t,len,i,w,x,count;
	char s[1000005];
	scanf("%d", &t);
	while(t--)
	{
		scanf("%s", s);
		len=strlen(s);
		count=1;
		if(len%2==0)
			w=len/2;
		else
			w=(len/2)+1;
		for(i=0;i<w;i++)
		{
			if((s[i]=='?')&&(s[len-1-i]=='?'))
				count=count*26;
			else if(((s[i]=='?')&&(s[len-1-i]!='?'))||((s[len-1-i]=='?')&&(s[i]!='?')))
				count=count*1;
			else if(s[i]==s[len-1-i])
				count=count*1;
			else
			{
				count=0;
				break;
			}
			if(count>10000009)
				count=count%10000009;
		}
		printf("%d\n", count%10000009);
	}
	return 0;
}



