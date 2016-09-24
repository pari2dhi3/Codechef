#include<stdio.h>
int main()
{
	long long int p,n,i,t,w;
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%lld", &n);
		for(i=0;i<n;i++)
		{
			scanf("%lld", &p);
		}
		w=n*(n-1);
		w=w/2;
		printf("%lld\n", w);
	}
	return 0;
}

			












