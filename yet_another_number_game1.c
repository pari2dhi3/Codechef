#include<stdio.h>
int main()
{
	long long int n;
	int t;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%lld", &n);
		if(n%2==0)
			printf("ALICE\n");
		else
			printf("BOB\n");
	}
	return 0;
}


