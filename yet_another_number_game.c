#include<stdio.h>
int main()
{
	int t;
	long long int n,count,w,q;
	scanf("%d",&t);
	while(t--)
	{	
		count=0;
		scanf("%lld", &n);
		q=n/2;
		while(q--)
		{
			if(n/2>0)
			{
				w=n/2;
				if(n%w==0)
				{
					n=n-w;
					count++;
				}
			}
			else
				break;
		}
		if(count%2==0)
			printf("BOB\n");
		else
			printf("ALICE\n");
	}
	return 0;
}

