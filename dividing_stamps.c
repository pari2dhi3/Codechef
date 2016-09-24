#include<stdio.h>
int main()
{
	long long int req,total,i,w,n;
	scanf("%lld", &n);
	total=0;
	for(i=0;i<n;i++)
	{
		scanf("%lld", &w);
		total=total+w;
	}
	req=(n*(n+1));
	req=req/2;
	if(req!=total)
		printf("NO\n");
	else
		printf("YES\n");
	return 0;
}

