#include<stdio.h>
int main()
{
	long long int ans,n,t;
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%lld", &n);
		ans=n*(n+3);
		ans=ans/2;
		printf("%lld\n", ans);
	}
	return 0;
}
