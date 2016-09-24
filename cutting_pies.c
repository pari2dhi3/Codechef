#include<stdio.h>
int gcd (int a, int b)
{
	int c;
	while(a!=0)
	{
		c=a;
		a=b%a;
		b=c;
	}
	return b;
}
int main()
{
	int t,n,z[50],i,w;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d ", &n);
		i=0;
		while(i<n)
		{
			scanf("%d", &z[i]);
			i++;
		}
		w=gcd(z[0],z[1]);
		i=2;
		while(i<n)
		{
			w=gcd(w,z[i]);
			i++;
		}
		i=0;
		while(i<n)
		{
			printf("%d ", (z[i]/w));
			i++;
		}
		printf("\n");
	}

	return 0;
}


