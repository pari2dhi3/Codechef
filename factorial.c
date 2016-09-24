#include<stdio.h>
#include<math.h>
int main()
{
	long long int t,n,x,count;
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%lld", &n);
		count=0;
		x=1;
		while(x<=n)
		{
			x=x*5;
			count=n/x+count;
		}
	printf("%lld\n", count);
	}
return;
}

