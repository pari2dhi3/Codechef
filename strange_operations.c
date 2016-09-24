#include<stdio.h>
#include<math.h>
int main()
{
	int sum,ans,i,n,k,t,a[10000000];
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d %d", &n, &k);
		sum=0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			sum=sum+a[i];
		}
		sum=sum+1;
		ans=sum*pow(2,k-1);
		if((ans%2)==0)
			printf("even\n");
		if((ans%2)!=0)
			printf("odd\n");
	}
	return 0;
}


