#include<stdio.h>
int main()
{
	long long int t,tleft,sgot;
	long long int n,k;
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%lld %lld", &n,&k);
		if((k==0)&&(n!=0))
			printf("%d %lld\n",0,n);
		if(n==0)
			printf("%d %d\n",0,0);
		if((k!=0)&&(n!=0))
		{
			tleft=n%k;
			sgot=n/k;
			printf("%lld %lld\n", sgot, tleft);
		}
	}
	return 0;
}



