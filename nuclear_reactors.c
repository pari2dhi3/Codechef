#include<stdio.h>
int main()
{
	int i,m,n,k,w[150],b;
	long long int a;
	scanf("%lld %d %d", &a,&n,&k);
	for(i=0;i<k;i++)
		w[i]=0;
	//sum=1;
	b=n+1;
	/*flag=0;
	for(i=1;i<=k;i++)
	{
		sum=sum*(n+1);
		if(sum>(a+1))
		{
			flag=1;
			break;
		}
	}
	sum=sum-1;
	if(n!=1)
	{
		if(flag==0)
			a=a%sum;
	}*/
	i=0;
	while((a>b)&&(i<k))
	{
		w[i]=a%b;
		a=a/b;
		i++;
	}
	if((i<k)&&(a!=0))
	{
		w[i]=a%b;
		a=a/b;
		if(a!=0)
			w[i+1]=a%b;
	}
	for(i=0;i<(k-1);i++)
		printf("%d ", w[i]);
	printf("%d\n",w[i]);
	return 0;
}
