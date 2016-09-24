#include<stdio.h>
int main()
{
	int t;
	long long int n,w;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%lld", &n);
		w=n/2+1;
		printf("%lld\n", w);
	}
	return 0;
}

