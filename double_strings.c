#include<stdio.h>
#include<math.h>
int main()
{
	long long int n,w,a;
	int t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld", &n);
		w=n/2;
		a=2*w;
		printf("%lld\n",a);
	}
	return 0;
}


