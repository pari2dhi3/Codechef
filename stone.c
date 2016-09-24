#include<stdio.h>
int main()
{
	int n,i;
	long long int a[100000],k,p,max,p1,max1;
	scanf("%d %lld", &n, &k);
	p=0;
	max=0;
	p1=0;
	max1=0;
	for(i=0;i<n;i++)
	{
		scanf("%lld", &a[i]);
		p=a[i];
		if(p>max)
			max=p;
	}
	if(k==0)
	{
		for(i=0;i<n;i++)
			printf("%lld ", a[i]);
	}
	else if((k%2)!=0)
	{
		for(i=0;i<n;i++)
		{
			a[i]=max-a[i];
			printf("%lld ", a[i]);
		}
	}
	else 
	{
		for(i=0;i<n;i++)
		{
			a[i]=max-a[i];
			p1=a[i];
			if(p1>max1)
				max1=p1;
		}
		for(i=0;i<n;i++)
		{
			a[i]=max1-a[i];
			printf("%lld ", a[i]);
		}
	}
	printf("\n");
	return 0;
}

