#include<stdio.h>
#include<string.h>
int gcd(int a,int b)
{
	if(b==0)
		return a;
	else
		return gcd(b,a%b);
}
int main()
{
	int i,t,l,z,a,b,ans;
	char s[252];
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d %s",&a,s);
		if(a==0)
			printf("%s\n",s);
		else
		{
			l=strlen(s);
			z=0;
			for(i=0;i<l;i++)
			{
				z=z*10+(s[i]-'0');
				z=z%a;
			}
			b=z;
			ans=gcd(a,b);
			printf("%d\n",ans);
		}
	}
	return 0;
}

