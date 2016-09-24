#include<stdio.h>
#include<string.h>
int main()
{
	char a[1000];
	int t,count,i,n,b[1000];
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d", &n);
		scanf("%s", a);
		for(i=0;i<n;i++)
			b[i]=0;
		if(a[0]=='1')
		{
			b[0]=1;
			b[1]=1;
		}
		if(a[n-1]=='1')
		{
			b[n-1]=1;
			b[n-2]=1;
		}
		for(i=1;i<(n-1);i++)
		{
			if(a[i]=='1')
			{
				b[i+1]=1;
				b[i]=1;
				b[i-1]=1;
			}
		}
		count=0;
		for(i=0;i<n;i++)
		{
			if(b[i]==0)
				count++;
		}
		printf("%d\n", count);
	}
	return 0;
}
