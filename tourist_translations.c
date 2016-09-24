#include<stdio.h>
#include<string.h>
int main()
{
	int t,i,l;
	char m[26], s[101];
	scanf("%d", &t);
	scanf("%s", m);
	while(t--)
	{
		scanf("%s",s);
		l=strlen(s);
		for(i=0;i<l;i++)
		{
			if((s[i]>=97)&&(s[i]<=122))
				printf("%c", m[s[i]-97]);
			else if((s[i]>=65)&&(s[i]<=90))
				printf("%c", m[s[i]-65]-32);
			else if(s[i]=='_')
				printf(" ");
			else
				printf("%c", s[i]);
		}
		printf("\n");
		for(i=0;i<l;i++)
			s[i]=0;
	}
	return 0;
}
