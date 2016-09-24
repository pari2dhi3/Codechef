#include<stdio.h>
int main()
{
	char s[26];
	int t,n,i,r,d;
	scanf("%d", &t);
	for(i=0;i<26;i++)
		s[i]=97+i;
	while(t--)
	{
		scanf("%d", &n);
		r=n%25;
		d=n/25;
		if(r!=0)
		{
			for(i=r;i>=0;i--)
				printf("%c",s[i]);
		}
		while(d--)
		{
			for(i=25;i>=0;i--)
				printf("%c",s[i]);
		}
		printf("\n");
	}
	return 0;
}
