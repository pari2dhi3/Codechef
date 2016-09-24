#include<stdio.h>
int main()
{
	int t, n, k, i;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d %d", &n, &k);
		i=n%k;
		printf("%d\n", i);
	}
	return 0;
}
