#include<stdio.h>
#include<string.h>
int main()
{
	int t,i,l,count,diff;
	char s[1001];
	scanf("%d", &t);
	while(t--)
	{
		scanf("%s", s);
		l=strlen(s);
		count=1;
		diff=0;
		for(i=1;i<l;i++)
		{
			if((s[i]-97)<(s[i-1]-97))
			{
				diff=((s[i-1]-97)-(s[i]-97));
				count=count+(26-diff);
			}
			else if((s[i]-97)>(s[i-1]-97))
			{
				diff=((s[i]-97)-(s[i-1]-97));
				count=count+diff;
			}
		}
		count=count+l;
		if(count>(11*l))
			printf("NO\n");
		else
			printf("YES\n");
	}
	return 0;
}



