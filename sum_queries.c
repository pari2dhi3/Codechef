#include<stdio.h>
int main()
{
	long long int n,m,q;
	scanf("%lld %lld", &n, &m);
	while(m--)
	{
		scanf("%lld", &q);
		if((q>=(n+2))&&(q<=((2*n)+1)))
		{
			printf("%lld\n", q-(n+1));
		}
		else if((q>=((2*n)+2))&&(q<=(3*n)))
		{
			printf("%lld\n", ((3*n)+1)-q);
		}
		else
			printf("0\n");
	}
	return 0;
}

