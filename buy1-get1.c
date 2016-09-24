#include<stdio.h>
#include<string.h>
int main()
{
	int t,a[26],b[26],l,i,count;
	char s[200];
	scanf("%d",&t);
	while(t--)
	{	
		scanf("%s",s);
		l=strlen(s);
		for(i=0;i<26;i++)
		{
			a[i]=0;
			b[i]=0;
		}
		for(i=0;i<l;i++)
		{
			if((s[i]>=65)&&(s[i]<=90))
				a[s[i]-65]++;
			if((s[i]>=97)&&(s[i]<=122))
				b[s[i]-97]++;
		}
		i=25;
		count=0;
		while(i>=0)
		{
			if(a[i]%2==0)
				count=count+(a[i]/2);
			else
				count=count+(a[i]/2)+1;
			if(b[i]%2==0)
				count=count+(b[i]/2);
			else
				count=count+(b[i]/2)+1;
			i--;
		}
		printf("%d\n", count);
	}
	return 0;
}

